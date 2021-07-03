#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    patches = 0
    borders = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                patches += 1
                if row != len(grid) - 1:
                    if grid[row + 1][col] == 1:
                        borders += 1
                if col != len(grid[row]) - 1:
                    if grid[row][col + 1] == 1:
                        borders += 1
    perimeter = (patches * 4) - (borders * 2)
    return perimeter
