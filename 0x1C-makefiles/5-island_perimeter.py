#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
        function returns the perimeter of the island described in a grid
        Args:
            grid: a list of list of integers
        Returns: perimeter
    """

    perimeter = 0

    for row in grid:
        for column in row:
            if column == 1:
                perimeter = 1 * 2

    return perimeter
