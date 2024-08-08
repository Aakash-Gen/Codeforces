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

int divide( double a , const double b){

    ll temp = 0;
    while(a >= b){
        temp++;
        a -= b;
    }
    return temp;
}

void solve(){
    int l , r;
    cin >> l >> r;
    vl arr(r-l+1,0);
    ll cnt =0;
    for(int i=l;i<=r;i++){
        arr[i-l] = i;
    }
    while(arr[0]!=0){
        arr[0] /= 3;
        arr[1] *=3;
        cnt++;
    }
    for(int i=1;i<r-l+1;i++){
        cnt+= divide(log10(arr[i]),log10(3))+1;
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
