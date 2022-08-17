#!/usr/bin/python3
"""
island Perimeter Calculator
"""


def island_perimeter(grid):

    """ Calculate Perimeter of island """
    count = 0
    for i in range(len(grid[0])):
        if grid[0][i] or grid[len(grid) - 1][i]:
            return 0
    for i in range(len(grid)):
        if grid[i][0] or grid[len(grid[0]) - 1][i]:
            return 0
    if not grid or grid == [[]]:
        return 0
    for i in range(1, len(grid)):
        for j in range(1, len(grid[0])):
            if grid[i][j]:
                if grid[i][j-1]:
                    count -= 2
                if grid[i-1][j]:
                    count -= 2
                count += 4
    return count
