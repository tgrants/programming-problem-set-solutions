#!/bin/bash

# Deletes all executables (files with no extensions) from directories
for d in ./clevercode ./codeforces ./codewars ./hackerrank ./leetcode; do
	find $d -type f ! -name "*.*" -delete
done
