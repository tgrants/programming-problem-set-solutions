#!/bin/python3

n = int(input().strip())
if n % 2:
	print("Weird")
elif n >= 2 and n <= 5:
	print("Not Weird")
elif n <= 20:
	print("Weird")
elif n > 20:
	print("Not Weird")
