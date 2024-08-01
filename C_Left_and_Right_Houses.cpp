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
    string a;
    cin >> a;
    double cnt0=0;
    double cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            cnt0++;
        } else {
            cnt1++;
        }
    }
    double pref0 =0;
    double pref1=0;
    vi arr;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            pref0++;
        } else {
            pref1++;
        }
        double rem0 = cnt0-pref0;
        double rem1 = cnt1-pref1;
        if((pref0>= double((i+1)/2.0)) && (rem1>= double((n-i-1)/2.0))){
            arr.push_back(i+1);
        }
    }
    if(arr.empty()){
        cout << 0 << endl;
        return;
    }
    vpii ans;
    for(int i=0;i<arr.size();i++){
        ans.push_back({abs(double(n/2.0)-arr[i]),arr[i]});
    }
    if(cnt1>= double((n/2.0))){
        ans.push_back({abs(double(n/2.0)- 0),0});
    }
    sort(ans.begin(),ans.end());
    int curr=ans[0].second;
    for(int i=0;i<ans.size()-1;i++){
        if(ans[i].first!=ans[i+1].first){
            break;
        } else if(ans[i].first==ans[i+1].first){
            curr = min(curr,ans[i].second);
        }
    }
    cout << curr << endl;
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