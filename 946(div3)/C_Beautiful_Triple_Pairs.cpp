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

map<pair<int,int>,map<int,int>> mpp1;
map<pair<int,int>,map<int,int>> mpp2;
map<pair<int,int>,map<int,int>> mpp3;
void solve(){
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    mpp1.clear();
    mpp2.clear();
    mpp3.clear();
    if(n==1 || n==2 || n==3){
        cout << 0 << endl;
        return;
    }
    for(int i=0;i<n-2;i++){
        mpp1[{arr[i],arr[i+1]}][arr[i+2]]++;
    }
    for(int i=1;i<n-1;i++){
        mpp2[{arr[i],arr[i+1]}][arr[i-1]]++;
    }
    for(int i=2;i<n;i++){
        mpp3[{arr[i-2],arr[i]}][arr[i-1]]++;
    }
    long long cnt=0;
    for(auto it: mpp1){
        auto i = it.second;
        if(i.size()==1){
            continue;
        }
        long long temp=0;
        for(auto j:i){
            cnt+= temp*j.second;
            temp+= j.second;
        }
    }
    for(auto it: mpp2){
        auto i = it.second;
        if(i.size()==1){
            continue;
        }
        long long temp=0;
        for(auto j:i){
            cnt+= temp*j.second;
            temp+= j.second;
        }
    }
    for(auto it: mpp3){
        auto i = it.second;
        if(i.size()==1){
            continue;
        }
        long long temp=0;
        for(auto j:i){
            cnt+= temp*j.second;
            temp+= j.second;
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
