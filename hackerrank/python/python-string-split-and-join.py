def split_and_join(line):
	return line.strip().replace(" ", "-")

if __name__ == '__main__':
	line = input()
	result = split_and_join(line)
	print(result)
