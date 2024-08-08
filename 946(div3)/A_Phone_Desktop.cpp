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
    int x,y;
    cin >> x >> y;
    int cnt =0;
    if(y%2==1){
        cnt+= y/2+1;
    } else {
        cnt+= y/2;
    }
    int rem = 15*cnt - y*4;
    if(cnt!=0){
        if(x<=rem){
            cout << cnt << endl;
            return;
        } else {
            x-=rem;
        }
    
    }
    if(x%15==0){
        cnt+= x/15;
    } else {
        cnt+= x/15+1;
    }
    cout << cnt << endl;
}

//         if(y==1){
//             y-=1;
//             cnt++;
//         } else {
//             y-=2;
//             cnt+=2;
//         }
//     }
//     if(cnt>0){
//         x-= cnt*7;
//         if(x<=0){
//             cout << cnt << endl;
//             return;
//         } else {
//             if(x%15==0){
//                 cnt+= x/15;
//             } else {
//                 cnt+= x/15+1;
//             }
//         }
//     } else {
//         if(x%15==0){
//                 cnt+= x/15;
//             } else {
//                 cnt+= x/15+1;
//             }
//     }
//     cout << cnt << endl;
// }
// // 2 // 7
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

