//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


//You need to complete this function
double cToF(int C)
{
    C = C * 1.8 + 32;
    return C;
}

// { Driver Code Starts.

int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
}  // } Driver Code Ends
