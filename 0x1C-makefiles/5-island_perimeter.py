#!/usr/bin/python3
"""
Display that returns the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """Display that returns the perimeter of the island described in grid"""
    b = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    b += 1
                if j == 0 or grid[i][j - 1] != 1:
                    b += 1
                if j == width or grid[i][j + 1] != 1:
                    b += 1
                if i == length or grid[i + 1][j] != 1:
                    b += 1
    return  b
