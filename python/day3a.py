#!/usr/bin/env python3

import sys 
import re

commandlist = []

rx = re.compile(r'mul\((\d+),(\d+)\)')

for line in sys.stdin:
    
    matches = rx.findall(line)

    if matches:
        for match in matches:
            commandlist.append((match[0],match[1]))

total = 0 

for command in commandlist:
    total += int(command[0]) * int(command[1])

print(total)
    




