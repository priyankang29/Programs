#Given a range(l,r), print the maximum value of XOR obtained for a combination of 2 values that are present within the range

import itertools
import operator
 
def maximizingXor(l, r):
    l1=[]
    for i in range(l,r+1):
        l1.append(i)
    l2=list(itertools.combinations(l1,2))
    m=0
    for i in range(len(l2)):
        if ((operator.xor(l2[i][0],l2[i][1])))>m:
            m=operator.xor(l2[i][0],l2[i][1])
    print(m)
maximizingXor(10,15)