n = int(input())
for i in range(n):
	v = input().split()
	try:
		print(int(v[0])//int(v[1]))
	except Exception as e:
		print(f"Error Code: {e}")
