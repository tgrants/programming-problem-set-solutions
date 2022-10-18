#!/bin/bash

# Removes all files from directories
for d in ./clevercode ./codeforces ./codewars ./hackerrank ./leetcode; do
	rm $d/*
done
