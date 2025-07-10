# find the max length of strictly increasing mountain in the grid from a place
row,col=map(int,input().split())
grid=[]
for _ in range(row):
    row_val=list(map(int,input().split()))
    grid.append(row_val)
# 994
# 688
# 211
# ans=5
def isSafe(x,y):
    return (0<=x<row and 0<=y<col)
dp=[[-1]*col for _ in range(row)]
def find_path(x,y):
    path_count=1
    dir=[(-1,0),(0,-1),(1,0),(0,1)]
    if dp[x][y]!=-1:
        return dp[x][y]
    for dx,dy in dir:
        n_x=x+dx
        n_y=y+dy
        if isSafe(n_x,n_y):
            if(grid[x][y]<grid[n_x][n_y]):
                path_count=max(path_count,1+find_path(n_x,n_y))
    dp[x][y]=path_count
    return dp[x][y]
ans=0
for i in range(row):
    for j in range(col):
        ans=max(ans,find_path(i,j))
print(ans)

# mountain hai grid mein toh hr ek place se meine path trace kia grid mein, 
# ab grid mein bhi trace se pehle hum ek block pe toh chl chuke hai jo ki 1 hai
# ab directions name ka array bnake usme tuple daal denge jisko hmne for loop mein dx,dy ke taur pe use kia
# new x and y find kia and phir check kra ki safe hai khin wo grid se bahar toh nhi hai
# agr safe hai then hme chahiye sbse lamba wala trace, 1+find path kia new x and y ke liye kyoki new x and y ke 4 possible combination ho skte hai 
# agr 4aaro stricly increasing ho ya greater than current cell value ho toh
# dp table bna li col and row ki
# ab kisi bhi element ko access krna ho toh row number pehle then column number
# dp mein current x and y ki value store kr li and agr same situation pdi toh return kr di value
# ans ka max leke hr ek grid element se print kra dia