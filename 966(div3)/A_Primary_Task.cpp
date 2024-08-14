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
    int a ;
    cin >> a;
    vi arr;
    while(a>0){
        arr.push_back(a%10);
        a/=10;
    }
    reverse(arr.begin(),arr.end());
    if(arr.size()<=2){
        cout << "NO" << endl;
        return;
    }
    if(arr[0]==1 && arr[1]==0){
        if(arr[2]==0){
            cout << "NO" << endl;
            return;
        } else if(arr.size()==3 && arr[2]==1){
            cout << "NO" << endl;
            return;
        }
        else {
            cout << "YES" << endl;
            return;
        }
    } else {
        cout << "NO" << endl;
        return;
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