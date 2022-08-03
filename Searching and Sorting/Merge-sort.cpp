// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         
         int a = m - l + 1;
         int b = r - m ;
         
         int L[a], R[b];
         
         int i=0, j=0, count=l;
         
         while(i<a){
             L[i] = arr[l+i];
             i++;
         }
         
         while(j<b){
             R[j] = arr[m + 1 + j];
             j++;
         }
         
         i = 0, j = 0;
         
         
         while(i<a && j<b){
             if(L[i] <= R[j]){
                 arr[count] = L[i];
                 i++;
             } else {
                 arr[count] = R[j];
                 j++;
             }
             count++;
         }
         
         while(i<a){
             arr[count] = L[i];
             i++;
             count++;
         }
         
         while(j<b){
             arr[count] = R[j];
             j++;
             count++;
         }
         
         
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l < r){
            int m = l + (r-l)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            
            merge(arr, l, m, r);
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
