#!/usr/bin/python3
"""Define the island primeter"""


def island_perimeter(grid):
    """Representa the island primeter"""
    height = len(grid)
    width = len(grid[0])
    i = 0
    j = 0

    for x in range(height):
        for y in range(width):
            if (grid[x][y] == 1):
                i += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    j += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    j += 1
    return i * 4 - j * 2
