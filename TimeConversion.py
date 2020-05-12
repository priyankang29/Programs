#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    #
    # Write your code here.
    #
    if(s[-2:]=='PM'):
        if s[0:2]!='12':
            h=str(int(s[0:2])+12)
            return (h+s[2:len(s)-2])
        else:
            
            return (s[:len(s)-2])
    else:
        if s[0:2]=='12':
            h=str("00")
            
            return (h+s[2:len(s)-2])
        else:
            return (s[:len(s)-2])

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
