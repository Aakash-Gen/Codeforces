#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            int Q;
            cin>> Q;
            arr[i] = Q;   
        }
        long long ans =0;
        long long prev = 0;
        long long mx =0;
        for(int i=0;i<n;i++){
            prev = max(prev,(long long)arr[i]);
            long long temp = prev - (long long)arr[i];
            ans+= temp;
            mx = max(mx,temp);
        }
        cout << ans + mx << endl;
    }
    return 0;
}