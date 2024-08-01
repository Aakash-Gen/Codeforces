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
    int a, b ,c;
    cin >> a >> b >> c;
    if(a==0 && b==0 && c==0){
        cout << 0 << endl;
        return;
    }
    int ans =0;
    ans+=a;
    ans+=b/3;
    b%=3;
    if(b>0){
        if(b+c>=3){
            ans++;
            c-= (3-b);
            ans+= c/3;
            if(c%3>0){
                ans++;
            }
        } else {
            cout << -1 <<endl;
            return;
        }
    } else {
        ans+= c/3;
        if(c%3>0){
            ans++;
        }
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