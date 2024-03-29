#!/usr/bin/python3
"""A module that gets perimeter of island"""


def island_perimeter(grid):
    """Main function to return perimeter of island"""
    perimeter = 0

    for idx in range(0, len(grid)):
        for idy in range(0, len(grid[idx])):
            if grid[idx][idy] == 1:
                perimeter += getPerimeter(idx, idy, grid)

    return perimeter


def getPerimeter(idx, idy, grid):
    """A helper function function to identify islands"""
    count = 0
    limitx = len(grid)
    limity = len(grid[idx])

    if idx - 1 >= 0:
        if (grid[idx - 1][idy] == 0):
            count += 1
    else:
        count += 1
    if idx + 1 < limitx:
        if (grid[idx + 1][idy] == 0):
            count += 1
    else:
        count += 1
    if idy - 1 >= 0:
        if (grid[idx][idy - 1] == 0):
            count += 1
    else:
        count += 1
    if idy + 1 < limity:
        if (grid[idx][idy + 1] == 0):
            count += 1
    else:
        count += 1
    return count
