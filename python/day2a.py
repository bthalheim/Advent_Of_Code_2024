#!/usr/bin/env python3
import sys 

# !Warning: this works but since its recursive it will fail on large inputs


# Test inputs
def report_test(first: int, rest: list, direction: int = 0) -> int:
    
    # Base Case 
    if len(rest) == 0: return 1 
   
    # Test Cases
    if first == rest[0]: return 0    
    if direction == 1 and first > rest[0]: return 0
    if direction == -1 and first < rest[0]: return 0
    if abs(first - rest[0]) > 3: return 0 

    # Set direction
    if direction == 0:
        if first < rest[0]: direction = 1
        else: direction = -1

    # Recursive Case
    return report_test(rest[0], rest[1:], direction)



safecount = 0

for line in sys.stdin:
    proc_line = [* map(int, line.strip().split(' '))]
    safecount += report_test(proc_line[0], proc_line[1:])


print(safecount)

