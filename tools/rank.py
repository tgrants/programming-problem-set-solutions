# Python script for getting rank from various competitive programming websites
# (c) 2022 Toms Grants

# Dependencies: BeautifulSoup4, lxml

import requests
import sys
from datetime import date
from bs4 import BeautifulSoup as bs


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
	print("Fetching URL '{}'".format(url))
	page = requests.get(url)
	if not page.ok:
		print("Could not load {}. Status code {}".format(url, page.status_code))
		exit()
	print("DONE".format(url))
	return bs(page.text, "lxml")


if __name__ == "__main__":
	today = date.today()
	site_list = {"Clevercode" : True, "Codewars" : True}
	update_readme = True

	# Parse arguments
	for arg in sys.argv:
		if arg == "--prompt":
			for site in site_list:
				ans = input("Get stats for {}? (Y/n) ".format(site))
				if ans == 'n' or ans == 'N': site_list[site] = False
		elif arg == "--export":
			pass
		elif arg == "--noupdate":
			update_readme = False

	site_stat_list = []

	### Clevercode
	if site_list.get("Clevercode"):
		clevercode_stats = site_stats("Clevercode")
		soup_clevercode = fetch_stats("https://clevercode.lv/statistics")
		soup_clevercode_table = soup_clevercode.find("table", class_="table table-striped").contents[5]
		soup_clevercode_a = soup_clevercode.find(lambda tag:tag.name=="a" and "Scheibenwischer" in tag.text)

		clevercode_stats.problems = soup_clevercode_a.parent.parent.contents[9].text
		clevercode_stats.points = soup_clevercode_a.parent.parent.contents[13].text
		clevercode_stats.rank = soup_clevercode_a.parent.parent.contents[1].text
		total_users = int(soup_clevercode_table.contents[-2].contents[1].text)
		percentile = (1 - ((total_users - int(clevercode_stats.rank)) / total_users)) * 100
		clevercode_stats.percentile = "Top " + str(round(percentile, 3)) + "%"

		site_stat_list.append(clevercode_stats)

	### Codeforces
	# API: https://codeforces.com/api/user.rating?handle={}
	pass

	### Codewars
	if site_list.get("Codewars"):
		codewars_stats = site_stats("Codewars")
		codewars_json = requests.get("https://www.codewars.com/api/v1/users/{}".format("Scheibenwischer")).json()
		codewars_stats.problems = codewars_json.get("codeChallenges").get("totalCompleted")
		codewars_stats.points = codewars_json.get("ranks").get("overall").get("score")
		codewars_stats.rank = codewars_json.get("leaderboardPosition")

		# No honor percentile in the API, need to use soup
		soup_codewars = fetch_stats("https://www.codewars.com/users/{}".format("Scheibenwischer"))
		soup_codewars_b = soup_codewars.find("b", string="Honor Percentile:")
		codewars_stats.percentile = soup_codewars_b.parent.contents[1]

		site_stat_list.append(codewars_stats)

	### Hackerrank
	# No easy way to access rank
	pass

	### Leetcode
	# soup_leetcode = fetch_stats("https://leetcode.com/{}/".format("Scheibenwischer"))
	pass

	### Update README
	if update_readme:
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
					readme_file.write("\nLast update: {}\n".format(today.strftime("%Y-%m-%d")))