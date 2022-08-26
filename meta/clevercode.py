# Python script for pulling and processing data from clevercode.lv
# (c) 2022 Toms Grants

# Dependencies: BeautifulSoup4, lxml, pandas

import os
import requests
import sys
import pandas as pd
from os import path
from bs4 import BeautifulSoup as bs


def fetch_stats(user):
	# Check if user already has their stats saved
	file_path = "meta/clevercode/{}_bs.txt".format(user)
	if path.isfile(file_path):
		return bs(open(file_path).read(), "lxml")
	else:
		url = "https://clevercode.lv/statistics/{}".format(user)
		page = requests.get(url)
		if not page.ok:
			print("Could not load page for user '{}'. Status code {}".format(user, page.status_code))
			exit()
		with open(file_path, "w") as file:
			file.write(page.text)
		return bs(page.text, "lxml")


def stalk(user):
	soup = fetch_stats(user)

	task_table = soup.find("table", class_="table table-striped hidden-xs")
	task_data = pd.read_html(str(task_table))[0]

	stats_table = soup.find("table", class_="table table-condensed")
	stats_data = pd.read_html(str(stats_table))[0]

	# Print stats table
	print("Stats for user '{}'".format(user))
	for i, name in enumerate(["Complete tasks", "Incomplete tasks", "Submissions", "Points"]):
		print("\t{}: {}".format(name, stats_data.loc[i, 1]))

	if input("Export data to a csv file? (N/y): ") == "y":
		task_data.to_csv("meta/clevercode/{}_task_data.csv".format(user), index=False)


def compare(user_a, user_b):
	# User A
	soup_a = fetch_stats(user_a)

	task_table_a = soup_a.find("table", class_="table table-striped hidden-xs")
	task_data_a = pd.read_html(str(task_table_a))[0]

	stats_table_a = soup_a.find("table", class_="table table-condensed")
	stats_data_a = pd.read_html(str(stats_table_a))[0]

	# User B
	soup_b = fetch_stats(user_b)
	
	task_table_b = soup_b.find("table", class_="table table-striped hidden-xs")
	task_data_b = pd.read_html(str(task_table_b))[0]

	stats_table_b = soup_b.find("table", class_="table table-condensed")
	stats_data_b = pd.read_html(str(stats_table_b))[0]

	# Compare stats
	print("Stat compartison between user '{}' and '{}'".format(user_a, user_b))
	for i, name in enumerate(["Complete tasks", "Incomplete tasks", "Submissions", "Points"]):
		print("\t{}: {}".format(name, stats_data_a.loc[i, 1] - stats_data_b.loc[i, 1]))

	# Compare tasks
	task_data = pd.merge(task_data_a, task_data_b, on="Kods", how="outer")
	print(task_data.to_string())

	#print("Tasks unique to user '{}':".format(user_a))
	#print("Tasks unique to user '{}':".format(user_b))
	# Work-in-progress


if __name__ == "__main__":
	if len(sys.argv) < 2:
		print("Command not specified. Pass 'help' as an argument to print a list of all commands")
		exit()
	command = sys.argv[1]
	match command:
		case "compare":
			if len(sys.argv) != 4:
				print("Command 'compare' requires 2 usernames")
				exit()
			compare(sys.argv[2], sys.argv[3])
		case "stalk":
			if len(sys.argv) != 3:
				print("Command 'stalk' requires 1 username")
				exit()
			stalk(sys.argv[2])
		case "help":
			print("compare [user1] [user2] - compare 2 users")
			print("stalk [user] - get information about a user")
			print("help - print a list of all commands")
		case _:
			print("Command not recognized")
	exit()
