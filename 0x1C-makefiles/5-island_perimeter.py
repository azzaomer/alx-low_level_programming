#!/usr/bin/python3

def island_perimeter(grid):
    row = len(grid)
    column = len(grid[0])
    perimeter = 0

    for r in range(row):
        for c in range(column):
            if grid[r][c] == 1:
                if r == 0 or grid[r-1][c] == 0:
                    perimeter += 1
                if r == row - 1 or grid[r+1][c] == 0:
                    perimeter += 1
                if c == 0 or grid[r][c-1] == 0:
                    perimeter += 1
                if c == column - 1 or grid[r][c+1] == 0:
                    perimeter += 1
    return perimeter
