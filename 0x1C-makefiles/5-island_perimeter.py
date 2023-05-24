#!/usr/bin/python3
"""
Module for an Island's perimeter
"""


def island_perimeter(grid):
    """
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        One cell is a square with side length 1
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water
        The island doesn’t have “lakes”
    """
    grid_w = len(grid[0])
    grid_h = len(grid)
    perimeter = 0

    for i in range(grid_h):
        for j in range(grid_w):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
