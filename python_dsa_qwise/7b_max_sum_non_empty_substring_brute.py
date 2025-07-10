l=[-2,-3,4,-1,-2,1,5,-3]
maxi=-1*float('inf')
for i in range(len(l)):
    for j in range(i,len(l)):
        sumo=0
        for k in range(i,j+1):
            sumo+=l[k]
        maxi=max(maxi,sumo)
print(maxi)
# here meine hr possible subset generate karaya hai in O(n^2) mein
# phir andr sum find kia hai O(n) mein aur maxi ko update kia hai sum find krne ke baad
# nearly time complexity is O(n^3)
# O(1) is space complexity