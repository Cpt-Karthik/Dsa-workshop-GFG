//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

long long sumUnderModulo(long long a,long long b)
{   
    int x = 1000000007, out1, out2;
    out1 = (a % x);
    out2 = (b % x);
    return (out1 + out2) % x;
}

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
