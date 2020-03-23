s1=input()
s2=input()
m=len(s1)+1
n=len(s2)+1
s=""
res=[[0 for a in range(n)]for a in range(m)]
#K = [[0 for x in range(W+1)] for x in range(n+1)] 
for i in range(1,m):
    for j in range(1,n):
            if(s1[i-1]==s2[j-1]):
                
                s+=s1[i-1]
                res[i][j]=res[i-1][j-1]+1
            else:
                res[i][j]=max(res[i-1][j],res[i][j-1])
ans=res[m-1][n-1]

    index = ans
  
    # Create a character array to store the lcs string 
    lcs = [""] * (index+1) 
    lcs[index] = "" 
  
    # Start from the right-most-bottom-most corner and 
    # one by one store characters in lcs[] 
    i = len(s1)
    j = len(s2) 
    while i > 0 and j > 0: 
  
        # If current character in X[] and Y are same, then 
        # current character is part of LCS 
        if s1[i-1] == s2[j-1]: 
            lcs[index-1] = s1[i-1] 
            i-=1
            j-=1
            index-=1
  
        # If not same, then find the larger of two and 
        # go in the direction of larger value 
        elif res[i-1][j] > res[i][j-1]: 
            i-=1
        else: 
            j-=1

print(lcs)