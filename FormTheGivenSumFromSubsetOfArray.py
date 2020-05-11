def find(arr,n,s):
    for i in range(1,2**n):
        sum=0
        for j in range(n):
            if ((i>>j) & 1):
                sum+=arr[j]
        if sum==s:
            print("YES")
            break

sum,n=input().split()
arr=list(map(int,input().split()))
find(arr,n,sum)