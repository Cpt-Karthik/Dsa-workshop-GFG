#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m){

            int i = 0, j = 0, k = 0;
            int x = 10e7 + 1;

            while (i < n && (j < n && k < m)) {
                if (arr1[j] >= x && arr2[k] >= x) {
                    if (arr1[j] % x <= arr2[k] % x) {
                        arr1[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr1[i] += (arr2[k++] % x) * x;
                    }
                }
                else if (arr1[j] >= x) {
                    if (arr1[j] % x <= arr2[k]) {
                        arr1[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr1[i] += (arr2[k++] % x) * x;
                    }
                }
                else if (arr2[k] >= x) {
                    if (arr1[j] <= arr2[k] % x) {
                        arr1[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr1[i] += (arr2[k++] % x) * x;
                    }
                }
                else {
                    if (arr1[j] <= arr2[k]) {
                        arr1[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr1[i] += (arr2[k++] % x) * x;
                    }
                }
                i++;
            }

            while (j < n && i < n) {
                arr1[i++] += (arr1[j++] % x) * x;
            }
            while (k < m && i < n) {
                arr1[i++] += (arr2[k++] % x) * x;
            }

            i = 0;

            while (i < m && (j < n && k < m)) {
                if (arr1[j] >= x && arr2[k] >= x) {
                    if (arr1[j] % x <= arr2[k] % x) {
                        arr2[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr2[i] += (arr2[k++] % x) * x;
                    }
                }
                else if (arr1[j] >= x) {
                    if (arr1[j] % x <= arr2[k]) {
                        arr2[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr2[i] += (arr2[k++] % x) * x;
                    }
                }
                else if (arr2[k] >= x) {
                    if (arr1[j] <= arr2[k] % x) {
                        arr2[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr2[i] += (arr2[k++] % x) * x;
                    }
                }
                else {
                    if (arr1[j] <= arr2[k]) {
                        arr2[i] += (arr1[j++] % x) * x;
                    }
                    else {
                        arr2[i] += (arr2[k++] % x) * x;
                    }
                }
                i++;
            }

            while (j < n && i < m) {
                arr2[i++] += (arr1[j++] % x) * x;
            }
            while (k < m && i < m) {
                arr2[i++] += (arr2[k++] % x) * x;
            }

            i = 0;

            while (i < n) {
                arr1[i++] /= x;
            }

            i = 0;

            while (i < m) {
                arr2[i++] /= x;
            }
                }
};


int main(){
    int T;
    cin >> T;

    while(T--){
        int n, m;
        cin >> n >> m;

        long long arr1[n], arr2[m];
        for(int i=0; i<n; i++)
            cin >> arr1[i];
        for(int i=0; i<m; i++)
            cin >> arr2[i];

        Solution obj;
        obj.merge(arr1, arr2, n ,m);

        for(int i=0; i<n; i++)
            cout << arr1[i] << " ";
        for (int i=0; i<m; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}
