#!/usr/bin/env python3

import sys 

left = []
right = []

table = {}

for line in sys.stdin:
    l, r = line.split("  ")

    left.append(int(l))
    right.append(int(r))

output = 0

for i in range(len(left)):
    if not left[i] in table.keys():
        table[left[i]] = 0

for i in range(len(right)):
    if right[i] in table.keys():
        table[right[i]] += 1

for i in range(len(left)):
    output += table[left[i]] * left[i]


print(output)


