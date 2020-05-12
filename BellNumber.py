# A Python program to find n'th Bell number 
#Input:  n = 2
#Output: Number of ways = 2
#Explanation: Let the set be {1, 2}
 #           { {1}, {2} } 
 #           { {1, 2} }

#Input:  n = 3
#Output: Number of ways = 5
#Explanation: Let the set be {1, 2, 3}
 #            { {1}, {2}, {3} }
  #           { {1}, {2, 3} }
   #          { {2}, {1, 3} }
   #          { {3}, {1, 2} }
   #          { {1, 2, 3} }. 
def bellNumber(n): 

	bell = [[0 for i in range(n+1)] for j in range(n+1)] 
	bell[0][0] = 1
	for i in range(1, n+1): 

		# Explicitly fill for j = 0 
		bell[i][0] = bell[i-1][i-1] 

		# Fill for remaining values of j 
		for j in range(1, i+1): 
			bell[i][j] = bell[i-1][j-1] + bell[i][j-1] 

	return bell[n][0] 

# Driver program 
for n in range(6): 
	print('Bell Number', n, 'is', bellNumber(n)) 

# This code is contributed by Soumen Ghosh 
