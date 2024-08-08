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
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int cnt =0;
    if(a1>b1){
        if(a2>=b2){
            cnt++;
        }
    } else if(a1==b1){
        if(a2>b2){
            cnt++;
        }
    }
    if(a2>b1){
        if(a1>=b2){
            cnt++;
        }
    } else if(a2==b1){
        if(a1>b2){
            cnt++;
        }
    }
    if(a1>b2){
        if(a2>=b1){
            cnt++;
        }
    } else if(a1==b2){
        if(a2>b1){
            cnt++;
        }
    }
    if(a2>b2){
        if(a1>=b1){
            cnt++;
        }
    } else if(a2==b2){
        if(a1>b1){
            cnt++;
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