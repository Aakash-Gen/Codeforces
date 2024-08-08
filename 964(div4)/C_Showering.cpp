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
#define all(x) x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;

void solve(){
    int n,s,m;
    cin >> n >> s >> m;
    vpii arr(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        arr[i] = {x,y};
    }
    int prev =0;
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i].first-prev>=s){
            found = true;
            break;
        }
        prev = arr[i].second;
    }
    if(m-prev>=s){
        found = true;
    }
    if(found){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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