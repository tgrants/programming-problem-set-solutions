#!/bin/bash
for d in ./clevercode ./codewars ./hackerrank ./leetcode; do
	find $d -type f ! -name "*.*" -delete
done
