#Given array of integers,find the sum of count of ones 
#appearing in numbers when represented in binary

n=int(input())
l=list(map(int,input().split()))

s=0
for i in l:
    temp=bin(i)
    
    s+=(temp.count('1'))

print(s)