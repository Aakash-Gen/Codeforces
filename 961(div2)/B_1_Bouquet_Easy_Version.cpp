#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long l=0;
        long long maxCnt =0;
        long long cnt =0;
        for(int i=0;i<n;i++){
            while(a[i]-a[l]>1){
                cnt-=a[l];
                l++;
            }
            cnt+= a[i];
            while(cnt> m){
                cnt-=a[l];
                l++;
            }
            maxCnt = max(maxCnt,cnt);
        }
        cout << maxCnt << endl;
    }
}
