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
    int l,r;
    cin >> l >> r;
    int L , R;
    cin >> L >> R;
    if(l!=L && r!=R ){
        int start = max(l,L);
        int end = min(r,R);
        if(end<start){
            cout << 1 << endl;
            return;
        } else {
            cout << end - start +2 << endl;
            return;
        }
    } else if(l==L && r==R){
        int start = max(l,L);
        int end = min(r,R);
        if(end<start){
            cout << 1 << endl;
            return;
        } else {
            cout << end - start << endl;
            return;
        }
    } else {
        int start = max(l,L);
        int end = min(r,R);
        if(end<start){
            cout << 1 << endl;
            return;
        } else {
            cout << end - start +1<< endl;
            return;
        }
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