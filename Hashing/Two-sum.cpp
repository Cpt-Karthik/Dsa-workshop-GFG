// { Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
// User function template for C++

// A[] : the input array of positive integers
// N : size of the array arr[]
// X : the required sum
class Solution
{
    public:
    bool keypair(vector<int> A, int N, int X)
    {
        // Your code goes here
        
        unordered_set <int> C;
        
        int temp = 13;
        
        for(int i=0; i<N; i++){
            
            temp = X - A[i];
            
            if(C.find(temp) != C.end()){
                return 1;
            }
            
            C.insert(A[i]);
        }
        
        return 0;        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> array(n);
        Solution ob;
        
        for (int i = 0; i < n; i++) cin >> array[i];
            cout << (ob.keypair(array, n, x) ? "Yes" : "No") << "\n";
    }
    return 0;
}
  // } Driver Code Ends
