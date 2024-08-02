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
#define S second 
#define all(x) = x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vi arr(n+1);    // storing the prefix sum 
    arr[0] = 0;
    for(int i=0;i<n;i++){
        int c = s[i] == '1' ? 1 : -1;
        arr[i+1] = arr[i] + c;
    }
    unordered_map<int,int> mpp;
    long long ans =0;
    for(int i=0;i<=n;i++){
        int x = arr[i];
        ans += (n+1-i)*(mpp[x]);
        mpp[x]+= i+1;  // storing the indices with pref[x] == pref[y]
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