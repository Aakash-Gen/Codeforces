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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.find("map")==string::npos && s.find("pie")==string::npos){
        cout << 0 << endl;
        return;
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        if(s.substr(i,5)=="mapie"){
            cnt++;
            i+=4;
        } else if(s.substr(i,3)=="map" || s.substr(i,3)=="pie"){
            cnt++;
            i+=2;
        }
    }
    cout << cnt << endl;
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