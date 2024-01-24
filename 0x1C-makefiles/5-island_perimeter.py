#!/usr/bin/python3
'''island perimeter'''

def island_perimeter(grid):
    '''finding the perimeter of an island'''
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
    
    return count * 2 + 2