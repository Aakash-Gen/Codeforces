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

ll fact(int n)
{ 
    if(n<=0) return 1;
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res%mod;
}
ll nCr(int n, int r)
{
    return (fact(n)/(fact(r) * fact(n - r)))%mod;
}
void solve(){
    int n,k;
    cin >> n >> k;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    ll ans =0;
    sort(arr.begin(),arr.end());
    int x = arr[(k+1)/2-1];
    for(int i=(k+1)/2-1;i<n-((k-1)/2-1);i++){
        if(arr[i]==0){
            continue;
        } else {
            ans = (ans +(nCr(i,(k-1)/2)*nCr(n-i-1,(k-1)/2))%mod)%mod;
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


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pii pair<int,int>
// #define vpii vector<pair<int,int>>
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define vl vector<long long>
// #define vvl vector<vector<long long>>
// #define pb push_back
// #define mp make_pair
// #define F first 
// #define unmp unordered_map<int,int>
// #define S second 
// #define all(x) x.begin(),x.end()
// #define sortasc(x) sort(all(x))
// #define sortdes(x) sort(x.rbegin(),x.rend())
// #define PI 3.1415926535897932384626
// const int mod = 1000000007;

// ll mod_fact(int n, ll mod) {
//     ll res = 1;
//     for (int i = 2; i <= n; i++)
//         res = (res * i) % mod;
//     return res;
// }

// ll mod_inv(ll a, ll mod) {
//     ll m0 = mod, t, q;
//     ll x0 = 0, x1 = 1;
//     if (mod == 1) return 0;
//     while (a > 1) {
//         q = a / mod;
//         t = mod;
//         mod = a % mod, a = t;
//         t = x0;
//         x0 = x1 - q * x0;
//         x1 = t;
//     }
//     if (x1 < 0) x1 += m0;
//     return x1;
// }

// ll nCr(int n, int r, ll mod) {
//     if (r > n) return 0;
//     ll numerator = mod_fact(n, mod);
//     ll denominator = (mod_fact(r, mod) * mod_fact(n - r, mod)) % mod;
//     return (numerator * mod_inv(denominator, mod)) % mod;
// }

// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vi arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     int x = arr[(k + 1) / 2 - 1];
//     ll ans = 0;
//     for (int i = (k + 1) / 2 - 1; i < n - ((k + 1) / 2-1); i++) {
//         if (arr[i] == 0) {
//             ans = (ans + nCr(i, (k - 1) / 2, mod) * nCr(n - i - 1, (k - 1) / 2, mod)) % mod;
//         }
//     }
//     cout << ans << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
