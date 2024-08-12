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
    int n,q;
    cin >> n >> q;
    vi a(n);
    a[0] =-1;
    for(int i=1;i<n;i++){
        cin >> a[i];
    }
    vi p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    vpii query(q);
    for(int i=0;i<q;i++){
        int x,y;
        cin >> x >> y;
        query[i] = {x,y};
    }
    for(int i=0;i<q;i++){
        int x=  p[query[i].first-1];
        int y = p[query[i].second-1];
        int par1 = a[query[i].first-1];
        int par2 = a[query[i].second-1];
        swap(p[query[i].first-1],p[query[i].second-1]);
        // swap(a[query[i].first-1],a[query[i].second-1]);
        bool found1 = false;
        bool found2 = false;
        for(int j=0;j<n;j++){
            if(p[j]==x){
                cout << "NO" << endl;
                found1=true;
                break;
            } else if(p[j]==par1){
                break;
            }
        }
        if(found1==true){
            continue;
        }
        for(int j=0;j<n;j++){
            if(p[j]==y){
                cout << "NO" << endl;
                found2 = true;
                break;
            } else if(p[j]==par2){
                break;
            }
        }
        if(found2==true){
            continue;
        }
        cout << "YES" << endl;
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