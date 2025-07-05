# given there is an array
# if subarray have atleast one unique element in it or not
# if yes return true (yes) else false (no)

import sys
from collections import defaultdict
n=int(sys.stdin.readline().strip())
l=list(map(int,sys.stdin.readline().split()))
def check_unique_subarray(l):
    freq=defaultdict(int)
    for i in range(n):
        for j in range(n):
            freq[l[i]]+=1
            if all(v>1 for v in freq.values()):
                return False
    return True
if check_unique_subarray(l):
    print("yes")
else:
    print("no")
