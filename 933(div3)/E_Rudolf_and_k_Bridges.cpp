#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define pb push_back
#define mp make_pair
#define F first 
#define unmp unordered_map<int,int>
#define S second 
#define all(x) = x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;


void solve(){
    int n,m,k,d;
    cin >> n >> m >> k >>d;
    vvi arr(n,vi(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    vl a(n);
    for(int i=0;i<n;i++){
        vl dp(m,1e9);
        multiset<ll> mst = {1};
        dp[0] = 1;
        for(int j=1;j<m-1;j++){
            dp[j] = *mst.begin() + arr[i][j] + 1;
            if(j-d-1>=0){
                mst.erase(mst.find(dp[j-d-1]));
            }
            mst.insert(dp[j]);
        }
        dp.back() = *mst.begin() + 1;
        a[i] = dp.back();
    }
    ll temp =0;
    for(int i=0;i<k;i++){
        temp+= a[i];
    }
    ll ans = temp;
    for(int i=k;i<n;i++){
        temp += a[i] - a[i-k];
        ans = min(ans,temp);
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}