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
    int n, m, k;
    cin >> n >> m >> k;
    string a;
    cin >> a;
    vi logs;
    for(int i=0;i<n;i++){
        if(a[i]=='L'){
            logs.push_back(i);
        }
    }
    logs.push_back(n+1);

    int i=-1;
    int log =0;
    while(i<n-1){
        if(m>=logs[log]-i){
            i = logs[log];
        } else {
            i+=m;
            if(i>n-1){
                cout << "YES" << endl;
                return;
            } else {
                while(i<n && i<logs[log]){
                    if(a[i]!='C' && k>0){
                        k--;
                        i++;
                    } else {
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
        log++;
    }
    cout << "YES" << endl;
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