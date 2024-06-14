#!/usr/bin/python3
"""
perimeter of island
"""


def island_perimeter(grid):
    """returns the perimeter of the island
    Args:
         grid (list) = list of integers
    """

    h = len(grid)
    w = len(grid[0])
    edge = 0
    perimeter = 0

    for r in range(h):
        for c in range(w):
            if grid[r][c] == 1:
                perimeter += 1
                if (c > 0 and grid[r][c - 1] == 1):
                    edge += 1
                if (r > 0 and grid[r - 1][c] == 1):
                    edge += 1
    return perimeter * 4 - edge * 2
