#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        long long floorSqrt(long long int x){

            if (x == 0 || x == 1)
                return x;

            int start = 1, end = x/2, ans;

            while(start <= end){
                long long int mid = (start + end) / 2;
                long long int sqr = mid * mid;

                if (sqr == x)
                    return mid;

                else if (sqr <= x){
                    start = mid + 1;
                    ans = mid;
                }

                else {
                    end = mid - 1;
                }
            }

            return ans;
        }
};

int main(){
    int T;
    cin >> T;

    while(T--){
        long long int n;
        cin >> n;

        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }

    return 0;
}
