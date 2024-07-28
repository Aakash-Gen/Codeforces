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
    int n,m ,k ;
    cin >> n >> m >> k;
    vi left(n);
    vi right(m);
    for(int i=0;i<n;i++){
        cin>> left[i];
    }
    for(int i=0;i<m;i++){
        cin>> right[i];
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(left[i]+right[j]<=k){
                cnt++;
            }
        }
    }
    cout << cnt<< endl;
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


