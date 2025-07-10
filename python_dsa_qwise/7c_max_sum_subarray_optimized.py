l=[-2,-3,4,-1,-2,1,5,-3]
maxi=-1*float('inf')
for i in range(len(l)):
    sumo=0
    for j in range(i,len(l)):      
        sumo+=l[j]
        maxi=max(maxi,sumo)
print(maxi)
# sum mein kya ho rha hai bs new element add ho jaa rha hai previous sum mein toh ek loop ghataa dia hai
# Time complexity O(n^2) space complexity O(1)