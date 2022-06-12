
class Solution:
    #Function to find element with more appearances between two elements in an array.    
    def majorityWins(self, arr, n, x, y):
        count_x = 0
        count_y = 0
        for i in arr:
            if x == y and x == i:
                count_x += 1 
                count_y += 1
            elif x == i:
                count_x += 1
            elif y == i:
                count_y += 1
            else:
                continue
            
        if count_x > count_y:
            return x
        elif count_x == count_y:
            return x if x < y else y
        else:
            return y
        # code here
    

#{ 
#  Driver Code Starts
if __name__ == '__main__':
    T=int(input())
    while(T>0):
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        
        x,y=map(int,input().strip().split())
        
        print(Solution().majorityWins(arr,n,x,y))
        T-=1

# } Driver Code Ends
