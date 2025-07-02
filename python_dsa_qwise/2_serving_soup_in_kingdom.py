# there are only two types of soup served type a and type b
# there can be n ml soup created at one time of each soup
# 4 operations can be performed on the soup
# 1. 100 ml a + 0 ml b
# 2. 75 ml a + 25 ml b  
# 3. 50 ml a + 50 ml b
# 4. 25 ml a + 75 ml b
# the goal is to find the probability of soup a finished first
# if both soup finished at the same time, then the probability is 0.5
# if both soup left then again perform the operation
from functools import lru_cache
def soupServings(N):
    n=N // 25
    if n > 500:
        return 1.0
    @lru_cache(None)
    def dp(a, b):
        if a <= 0 and b <= 0:
            return 0.5
        if a <= 0:
            return 1.0
        if b <= 0:
            return 0.0
        return (dp(a - 4, b) + dp(a - 3, b - 1) + dp(a - 2, b - 2) + dp(a - 1, b - 3)) / 4.0
    return dp(n, n)
# Example usage
print(soupServings(50))  # Output: 0.625
print(soupServings(100))  # Output: 0.71875