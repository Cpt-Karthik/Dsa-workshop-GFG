    if n == 1 and arr[0] == 0:
        return -1
    else:
        for i in range(0,n):
            if arr[i] == 0:
                if i == n - 1:
                    return -1
                continue
            elif arr[i] == 1:
                return i
            else:
                return -1
            
            
    
    #Code here

#{ 
#  Driver Code Starts
#driver code
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(transitionPoint(arr, n))

# } Driver Code Ends
