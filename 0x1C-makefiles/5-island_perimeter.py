#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        - grid: A list of lists of integers representing the island.

    Returns:
        An integer representing the perimeter of the island.
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0]):
            if grid[i][j] == 1:
                perimeter += 4  # Start with a perimeter of 4 for each land cell

                # Check adjacent cells and subtract 1 from the perimeter for each neighboring land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

