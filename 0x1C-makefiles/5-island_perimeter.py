#!/usr/bin/python3
"""
island Perimeter Calculator
"""


def island_perimeter(grid):

    """ Calculate Perimeter of island """
    count = 0
    if not grid or (grid and (len(grid) < 2 or len(grid[0]) < 2)):
        return 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[0]) - 1):
            if grid[i][j]:
                if grid[i][j-1]:
                    count -= 2
                if grid[i-1][j]:
                    count -= 2
                count += 4
    return count
