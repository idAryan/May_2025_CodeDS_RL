# start hoga jaha pe sumo zero hua tha akhiri baar
# end hoga jaha pe sumo maxi ko update kia tha
# i am here to find the longest length subarray with maximum sum

start_index,end_index=0,0
l=[-2,-3,4,-1,-2,1,5,-3]
sumo,maxi=0,-1*float('inf')
for i in range(len(l)):
    if sumo==0:
        start_index=i
    sumo+=l[i]
    if sumo>=maxi:
        maxi=sumo
        end_index=i
    if sumo<0:
        sumo=0
print(f"Maximum sum is {maxi}")
print(f"Max length array for the sum is {l[start_index:end_index+1]}")