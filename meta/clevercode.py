# Python script for pulling and processing data from clevercode.lv
# (c) 2022 Toms Grants

# Dependencies: BeautifulSoup4, lxml, pandas

import requests
import sys
import pandas as pd
from bs4 import BeautifulSoup as bs


def fetch_stats(user):
	url = "https://clevercode.lv/statistics/{}".format(user)
	page = requests.get(url)
	if not page.ok:
		print("Could not load page for user '{}'. Status code {}".format(user, page.status_code))
		exit()
	return bs(page.text, "lxml")


def stalk(user):
	soup = fetch_stats(user)
	task_table = soup.find("table", class_="table table-striped hidden-xs")

	headers = []
	for i in task_table.find_all("th"):
		headers.append(i.text)

	data = pd.DataFrame(columns = headers)
	for j in task_table.find_all("tr")[1:]:
		row_data = j.find_all("td")
		row = [i.text for i in row_data]
		length = len(data)
		data.loc[length] = row

	if input("Export data to a csv file? (N/y): ") == "y":
		data.to_csv("{}_data.csv".format(user), index=False)


def compare(user_a, user_b):
	soup_a = fetch_stats(user_a)
	soup_b = fetch_stats(user_b)
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
				print("Command 'stalk' requires a username")
				exit()
			stalk(sys.argv[2])
		case "help":
			print("compare [user1] [user2] - compare 2 users")
			print("stalk [user] - get information about a user")
			print("help - print a list of all commands")
		case _:
			print("Command not recognized")
	exit()
