# find the maximum sum non empty subsequence

# thiking directly saari positive value ko sum kr do
# agr ek bhi positive nhi hai toh maximum ko return kr do kyoki non empty bola hai
# its easy na but what about substring bola toh
# 3,5,-1,30 iska answer 30 nhi hoga blki 3+5+-1+30=37 hoga
# maximum sum subarray
# kadanes algorithm
# agr sum -ve ho rha hai toh aaage wo sum increase na krke decrease hi krega toh usse zero bna do
# if include the empty subarray so if maxi is negative in last so return 0
l=list(map(int,input().split()))
maxi=-1*float('inf')
sumo=0
for i in range(len(l)):
    sumo+=l[i]
    maxi=max(sumo,maxi)
    if sumo<0:
        sumo=0
if maxi<0:
    maxi=0
print(maxi)
