# there is a spell matrix
# a falling path [-1,0,1]
# write a program to find path value with minimum total cost from the top to the bottom of the matrix

import sys
from collections import lru_cache
n=int(sys.stdin.readline().strip())
matrix=[]

for i in range(n):
    row=list(map(int,sys.stdin.readline().split()))
    matrix.append(row)
@lru_cache(None)
def dp(row,col):
    if col<0 or col>=n:
        return float('inf')
    if row==n-1:
        return 0
    cost=matrix[row][col]
    return cost + min(dp(row+1,col-1), dp(row+1,col), dp(row+1,col+1))
result=float('inf')
for i in range(n):
    result=min(result, dp(0,i))
print(result)