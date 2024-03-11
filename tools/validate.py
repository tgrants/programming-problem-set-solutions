# Python script for ensuring proper code formatting in this repository
# (c) 2024 Toms Grants

from pathlib import Path
import os


def check_indentation(path) -> bool:
	spaces_count: int = 0
	with open(path, 'r') as file:
		for line in file:
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
	# TODO
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
		}
	]
	extensions = (".c", ".cpp")
	limit: int = 5

	for dirs in lint:
		directory = dirs.get("dir")
		print(f"== {directory} ==")
		for filename in os.listdir(directory):
			if limit <= 0: break
			if not filename.endswith(extensions): continue
			path = os.path.join(directory, filename)
			if not os.path.isfile(path): continue
			for check in dirs.get("checks"):
				if not check(path): # Check failed
					limit -= 1
					print(path, "failed", check.__name__)
					break

