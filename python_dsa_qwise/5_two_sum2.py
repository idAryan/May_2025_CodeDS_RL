# find the two idx (add 1 and return) these two have sum equals to target
# given l is sorted in ascending order
n=int(input())
l=list(map(int,input().split()))
target=int(input())
L,R=0,len(l)-1
while L<R:
    total=l[L]+l[R]
    if total==target:
        print(f"[{L+1},{R+1}]")
    elif target<total:
        R-=1
    else:
        L+=1

