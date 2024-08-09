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

// void solve(){
//     int k,q;
//     cin >> k >> q;
//     vi arrk(k);
//     vi arrq(q);
//     for(int i=0;i<k;i++){
//         cin >> arrk[i];
//     }
//     for(int i=0;i<q;i++){
//         cin >> arrq[i];
//     }
//     sortasc(arrk);
//     bool found = false;
//     for(int i=0;i<q;i++){
//         int ans =INT_MAX;
//         for(int j=0;j<k;j++){
//             if(arrq[i]<arrk[j] && !found){
//                 ans = arrq[i];
//             } else {
//                 found = true;
//                 ans = min(ans,arrk[j]-1);
//             }
//         }
//         if(i==q-1){
//             cout << ans;
//             break;
//         }
//         cout << ans << " ";
//     }
//     cout << endl;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


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
    int k,q;
    cin >> k >> q;
    vi arrk(k);
    vi arrq(q);
    for(int i=0;i<k;i++){
        cin >> arrk[i];
    }
    for(int i=0;i<q;i++){
        cin >> arrq[i];
    }
    sortasc(arrk);
    int ans =0;
    for(int i=0;i<q;i++){
        if(arrq[i]<arrk[0]){
            ans = arrq[i];
        } else {
            ans = arrk[0]-1;
        }
        if(i==q-1){
            cout << ans;
            break;
        }
        cout << ans << " ";
    }
    cout << endl;
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