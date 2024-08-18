import re

def count_substring(string, sub_string):
	return len(re.findall(r'(?={})'.format(sub_string), string))

if __name__ == '__main__':
	string = input().strip()
	sub_string = input().strip()
	
	count = count_substring(string, sub_string)
	print(count)
