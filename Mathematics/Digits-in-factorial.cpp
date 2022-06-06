//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

int digitsInFactorial(int N)
{   
    if (N < 0) 
        return 1; 
    if (N <= 1) 
        return 1; 
    double x = ((N * log10(N / M_E) +  
                 log10(2 * M_PI * N) / 
                 2.0)); 
    return floor(x) + 1; 
}

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling method digitsInFactorial()
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
