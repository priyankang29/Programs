# cook your dish here

t=int(input())
for i in range(t):
    d=[]
    n,m=(input().split())
    n=int(n)
    m=int(m)
    f=list(map(int,input().split()))
    p=list(map(int,input().split()))
    l=list(set(f))
    for j in range(len(l)):
        c=0
        for k in range(len(f)):
            if l[j]==f[k]:
                c+=p[k]
        d.append(c)
    #key_min = min(d.keys(), key=(lambda k: d[k]))
    print(min(d))
    

        