n=int(input())
k=int(input())
def bc(n,k):
    if(k==0 or n==k):
        return 1
    else:
        #print(bc(n-1,k-1)+bc(n-1,k))
        return bc(n-1,k-1)+bc(n-1,k)
print(bc(n,k))
