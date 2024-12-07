#!/usr/bin/env python3

import sys 

left = []
right = []

for line in sys.stdin:
    l, r = line.split("  ")

    left.append(int(l))
    right.append(int(r))

left.sort()
right.sort()

output = 0

for i in range(len(left)):
    output += abs(left[i] - right[i])    

print(output)


