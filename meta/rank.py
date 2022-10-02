# Python script for getting rank from various competitive programming websites
# (c) 2022 Toms Grants

# Dependencies: BeautifulSoup4, lxml

import requests
from bs4 import BeautifulSoup as bs

# Work-in-progress

def fetch_stats(site, user):
	url = site.format(user)
	page = requests.get(url)
	if not page.ok:
		print("Could not load {}. Status code {}".format(url, page.status_code))
		exit()
	print("URL '{}' fetched".format(url))
	return bs(page.text, "lxml")


if __name__ == "__main__":
	# Clevercode
	soup_clevercode = fetch_stats("https://clevercode.lv/statistics/{}", "Scheibenwischer")

	# Codeforces
	# Use API
	pass

	# Codewars
	# Use API
	# https://www.codewars.com/api/v1/users/Scheibenwischer
	pass

	# Hackerrank
	# No easy way to access rank
	pass

	# Leetcode
	soup_leetcode = fetch_stats("https://leetcode.com/{}/", "Scheibenwischer")
	pass