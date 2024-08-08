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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    int cnt4=0;
    for( char c : s){
        if(c=='A'){
            cnt1++;
        } else if(c == 'B'){
            cnt2++;
        } else if(c == 'C'){
            cnt3++;
        } else if(c=='D'){
            cnt4++;
        }
    }
    if(cnt1>=n) cnt1=n;
    if(cnt2>=n) cnt2=n;
    if(cnt3>=n) cnt3=n;
    if(cnt4>=n) cnt4=n;
    cout << cnt1 + cnt2 + cnt3 + cnt4 << endl;
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