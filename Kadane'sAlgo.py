def kadane(a,size):
    max=float("-inf")
    tmax=0
    for i in range(size):
        tmax+=a[i]
        if max<tmax:
            max=tmax
        if tmax<0:
            tmax=0
    return max
