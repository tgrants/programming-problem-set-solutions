import sys

def total_bytes(object):
	return sys.getsizeof(object)

# OR
# from sys import getsizeof as total_bytes 