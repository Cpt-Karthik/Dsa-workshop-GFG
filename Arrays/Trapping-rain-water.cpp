#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long trappingwater(int arr[], int n){
            int lo = 0, hi = n-1, left = 0, right = 0;
            long long area = 0;


            while(lo <= hi){
                if(arr[lo] < arr[hi]){
                    if(arr[lo] > left){
                        left = arr[lo];
                    }
                    else{
                        area += left - arr[lo];
                    }
                    lo++;
                }
                else{
                    if(arr[hi] > right){
                        right = arr[hi];
                    }
                    else{
                        area += right - arr[hi];
                    }
                    hi--;
                }
            }
            return area;
        }
};


int main(){
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];

        Solution object;
        cout << object.trappingwater(a, n) << endl;
    }

    return 0;
}
