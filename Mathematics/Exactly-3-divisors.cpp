
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int isprime(int N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}



//User function Template for C++

int exactly3Divisors(int N)
{
    int count = 0;
    for(int i = 2; i*i <= N; i++)
    {
        if(i*i <= N && isprime(i))
        {
            count++;
        }
    }
return count;
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
        
        //calling function exactly3Divisors()
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
