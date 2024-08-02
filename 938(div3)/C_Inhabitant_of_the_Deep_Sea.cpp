#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n >>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int l =0;
        int r =n-1;
        int cnt =0;
        bool left = true;
        while(k>0 && l<=r){
            if (arr[l] < arr[r]) {
                if (left) {
                    if (k >= (2 * arr[l] - 1)) {
                        arr[r] -= (arr[l]-1);
                        k -= 2 * arr[l] - 1;
                        l++;
                    } else {
                        break;
                    }
                } else {
                    if (k >= 2 * arr[l]) {
                        arr[r] -= (arr[l]);
                        k -= 2 * arr[l];
                        l++;
                    } else {
                        break;
                    }
                }
                left = !left;
            } else if(arr[r]<arr[l]){
                if (left) {
                    if (k >= 2 * arr[r]) {
                        arr[l] -= (arr[r]);
                        k -= 2 * arr[r];
                        r--;
                    } else {
                        break;
                    }
                } else {
                    if (k >= (2 * arr[r] - 1)) {
                        arr[l]-= (arr[r]-1);
                        k -= 2 * arr[r] - 1;
                        r--;
                    } else {
                        break;
                    }
                }
                left = !left;
            } else {
                k-=2*arr[l];
                l++;
                r--;
            }
        }
        cout << n- (r-l+1) << endl;
    }
}
