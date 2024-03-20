#!/usr/bin/python3

"""
Function: island_perimeter(grid)
Description: Returns the perimeter of the island described in the grid.
Parameters:
    grid: List of lists of integers representing the island grid where:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water, and there is one island (or nothing).
        The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
Returns:
    Perimeter of the island (integer)
"""

def island_perimeter(grid):
    perimeter = 0
    
    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # If current cell is land, calculate its contribution to the perimeter
            if grid[i][j] == 1:
                perimeter += 4
                
                # Check adjacent cells to subtract shared edges
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    
    return perimeter
