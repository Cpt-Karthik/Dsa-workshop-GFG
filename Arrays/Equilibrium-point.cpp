
# User function Template for python3

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,A, N):
        sum1 = 0
        for i in A:
            sum1 += i
        
        sum2 = 0
        for i in range(0, N):
            sum1 -= A[i]
            
            if sum1 == sum2:
                return i + 1
            
            sum2 += A[i]
        
        return -1
        # Your code here


#{ 
#  Driver Code Starts
# Initial Template for Python 3

import math


def main():

    T = int(input())

    while(T > 0):

        N = int(input())

        A = [int(x) for x in input().strip().split()]
        ob=Solution()

        print(ob.equilibriumPoint(A, N))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends
