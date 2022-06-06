//Initial Template for C++

#include<iostream>
using namespace std;


 // } Driver Code Ends

#include <algorithm> 
//User function Template for C++

//Complete this function
int modInverse(int a, int m)
{   
    if(m == 1)
        return -1;
    if(__gcd(a, m) != 1)
        return -1;
    
    a = a % m; 
    for (int x = 1; x < m; x++) 
        if ((a * x) % m == 1) 
            return x; 
}

// { Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		
		//calling function modInverse()
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}  // } Driver Code Ends
