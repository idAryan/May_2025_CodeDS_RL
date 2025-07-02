# there is two person in a grid, one is at (0, 0) and the other is at (0,col-1)
# they can move diagonally left or right, or down
# the grid contain cherries, and they can collect cherries
# the goal is to find the maximum number of cherries they can collect

# 311
# 251
# 155
# 211
# ans=24
from functools import lru_cache
grid= [
    [3, 1, 1],
    [2, 5, 1],      
    [1, 5, 5],
    [2, 1, 1]
]
total_rows = len(grid)
total_cols = len(grid[0])
@lru_cache(None)
def dp(curr_row, robo1_col, robo2_col):
    # boundation check
    if robo1_col<0 or robo2_col<0 or robo1_col>=total_cols or robo2_col>=total_cols :
        return 0
    if curr_row >=total_rows:
        return 0
    cherries = grid[curr_row][robo1_col]
    if robo1_col != robo2_col:
        cherries += grid[curr_row][robo2_col]
    max_cherries_in_next_row = 0
    for move_robo1 in [-1, 0, 1]:
        for move_robo2 in [-1, 0, 1]:
            robo1_new_col = robo1_col + move_robo1
            robo2_new_col = robo2_col + move_robo2
            max_cherries_in_next_row = max(max_cherries_in_next_row, dp(curr_row + 1, robo1_new_col, robo2_new_col))
    return cherries + max_cherries_in_next_row

print(dp(0, 0, total_cols-1))  # Convert grid to a tuple of tuples for caching

# Output: 24