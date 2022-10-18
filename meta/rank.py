# Python script for getting rank from various competitive programming websites
# (c) 2022 Toms Grants

# Dependencies: BeautifulSoup4, lxml

import requests
import sys
from bs4 import BeautifulSoup as bs

# Work-in-progress

class site_stats():
	name = problems = points = rank = percentile = "N/A"

	def __init__(self, name):
		self.name = name

	def to_column(self):
		return "{} | {} | {} | {} | {}".format(
			self.name,
			self.problems,
			self.points,
			self.rank,
			self.percentile)


def fetch_stats(url):
	page = requests.get(url)
	if not page.ok:
		print("Could not load {}. Status code {}".format(url, page.status_code))
		exit()
	print("URL '{}' fetched".format(url))
	return bs(page.text, "lxml")


if __name__ == "__main__":
	# Parse arguments
	update_readme = True

	site_stat_list = []

	# Clevercode
	# soup_clevercode = fetch_stats("https://clevercode.lv/statistics")
	pass

	# Codeforces
	# Use API
	# https://codeforces.com/api/user.rating?handle={}
	pass

	# Codewars
	codewars_stats = site_stats("Codewars")
	codewars_json = requests.get("https://www.codewars.com/api/v1/users/{}".format("Scheibenwischer")).json()
	codewars_stats.problems = codewars_json.get("codeChallenges").get("totalCompleted")
	codewars_stats.points = codewars_json.get("ranks").get("overall").get("score")
	codewars_stats.rank = codewars_json.get("leaderboardPosition")
	# codewars_stats.percentile =
	site_stat_list.append(codewars_stats)

	# Hackerrank
	# No easy way to access rank
	pass

	# Leetcode
	# soup_leetcode = fetch_stats("https://leetcode.com/{}/".format("Scheibenwischer"))
	pass

	# Update README
	with open(sys.path[0] + "/../README.md", "r") as readme_file:
		lines = readme_file.readlines()
	with open(sys.path[0] + "/../README.md", "w") as readme_file:
		delete_lines = False
		for line in lines:
			if line.strip("\n") == "<!-- stats end -->":
				delete_lines = False	
			if not delete_lines:
				readme_file.write(line)
			if line.strip("\n") == "<!-- stats begin -->":
				delete_lines = True
				readme_file.write("Site name | Problems | Points | Rank | Percentile\n")
				readme_file.write("--- | --- | --- | --- | ---\n")
				for item in site_stat_list:
					readme_file.write(item.to_column() + "\n")