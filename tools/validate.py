# Python script for ensuring proper code formatting in this repository
# (c) 2024 Toms Grants

from pathlib import Path
import os


class reversor:
	def __init__(self, obj):
		self.obj = obj

	def __eq__(self, other):
		return other.obj == self.obj

	def __lt__(self, other):
		return other.obj < self.obj


def check_indentation(path) -> bool:
	spaces_count: int = 0
	comment_open_count: int = 0
	comment_close_count: int = 0
	with open(path, 'r') as file:
		for line in file:
			# C-style comment check
			if "/*" in line:
				comment_open_count += 1
			if "*/" in line:
				comment_close_count += 1
				line = line.split("*/")[1] # Remove everything before comment ends
			if comment_open_count > comment_close_count:
				continue # A multiline comment is open, ignore whitespace
			# Count leading spaces
			leading_spaces = len(line) - len(line.lstrip(' '))
			# leading_tabs = len(line) - len(line.lstrip('\t'))
			if (leading_spaces > 0): spaces_count += 1
	if spaces_count > 0:
		return False
	return True


def check_newline_at_end(path) -> bool:
	with open(path, 'r') as file:
		content = file.read()
		if content[-1] == '\n':
			return True
		else:
			return False


def check_trailing_whitespace(path) -> bool:
	with open(path, 'r') as file:
		for line in file:
			if line.rstrip() != line.rstrip("\n"):
				#print("Trailing whitespace found: ", line)
				return False
	return True


if __name__ == "__main__":
	lint = [
		{
			"dir": "clevercode",
			"checks": [
				check_indentation,
				check_newline_at_end,
				check_trailing_whitespace
			]
		},
		{
			"dir": "codeforces",
			"checks": [
				check_indentation,
				check_newline_at_end,
				check_trailing_whitespace
			]
		},
		{
			"dir": "hackerrank",
			"checks": [
				check_indentation,
				check_newline_at_end,
				check_trailing_whitespace
			]
		},
		{
			"dir": "leetcode",
			"checks": [
				check_indentation,
				check_newline_at_end,
				check_trailing_whitespace
			]
		}
	]
	extensions = (".c", ".cpp", ".go", ".py", ".rs", ".sql",)
	limit: int = 5

	failed_checks = {}
	for dirs in lint:
		directory = dirs.get("dir")
		for filename in os.listdir(directory):
			if not filename.endswith(extensions): continue
			path = os.path.join(directory, filename)
			if not os.path.isfile(path): continue
			for check in dirs.get("checks"):
				if not check(path): # Check failed
					if path in failed_checks:
						failed_checks[path].append(check.__name__)
					else:
						failed_checks[path] = [check.__name__]
	# Print result
	failed_checks_sorted = dict(sorted(
		failed_checks.items(),
		key=lambda item: (len(item[1]), reversor(item[0])),
		reverse=True
	)[:limit])
	for key, value in failed_checks_sorted.items():
		print(f"{key}: {value}")
