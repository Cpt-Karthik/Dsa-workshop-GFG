#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> result;
        
        int sum = 0, resBegin = 0, i = 0;
        
        for(i; i<n; i++){
            
            if(n==1){
                if(arr[0]==s){
                    result = {1,1};
                    return result;
                }
                else{
                    result = {-1};
                    return result;
                }
            }
            
            sum+= arr[i];
            
            while(sum > s && resBegin < i){
                sum = sum - arr[resBegin];
                resBegin++;
            }
            
            if(sum == s){
                result = {resBegin+1, i+1};
                return result;
            }
        }
        
        result = {-1};
        return result;
        // Your code here
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
