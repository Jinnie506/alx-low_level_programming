#!/usr/bin/python3
"""defines island_perimeter module"""


def island_perimeter(grid):
    """Returns perimeter of island"""
    perimeter = 0
    for row in range(len(grid)):
        # print(row)  # 0, 1, 2, 3
        for column in range(len(grid[row])):
            # print(grid[row][column]) #actual values
            if grid[row][column] == 1:
                """count top perimeter"""
                if row == 0:
                    # print("TOP ROW")
                    perimeter += 1
                elif row != 0 and grid[row - 1][column] != 1:
                    # print("TOP ISLAND")
                    perimeter += 1

                """left perimeter"""
                if column == 0:
                    # print("BEGIN ROW")
                    perimeter += 1
                elif column != 0 and grid[row][column - 1] != 1:
                    # print ("LEFT ISLAND")
                    perimeter += 1

                """right perimeter"""
                if column == len(grid[row]) - 1:
                    # print("END ROW")
                    perimeter += 1
                elif (column != len(grid[row]) - 1 and
                      grid[row][column + 1] != 1):
                    # print("RIGHT ISLAND")
                    perimeter += 1

                """bottom perimeter"""
                if row == len(grid) - 1:
                    # print("LAST ROW")
                    perimeter += 1
                elif row != len(grid) - 1 and grid[row + 1][column] != 1:
                    # print("BOTTOM ISLAND")
                    perimeter += 1

    return perimeter
