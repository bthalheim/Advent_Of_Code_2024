#!/usr/bin/env python3

import sys 
import re

commandlist = []

rx = re.compile(r'mul\((\d+),(\d+)\)')

lines = sys.stdin.readlines()
lines = "".join(lines)


conditionals = lines.split("do()")
print(conditionals)

for conditional in conditionals:
       
    print(conditional.split("don't()")[0])
    matches = rx.findall(conditional.split("don't()")[0]) 

    if matches:
        for match in matches:
            commandlist.append((match[0],match[1]))


total = 0 

for command in commandlist:
    total += int(command[0]) * int(command[1])


print(total)
    



