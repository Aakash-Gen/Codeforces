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
    int n,k;
    cin >> n >> k;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxi = *max_element(arr.begin(),arr.end());
    int limit = maxi + k-1;
    int maxl = INT_MIN;
    int mini = INT_MAX;
    sort(arr.begin(),arr.end());
    vpii temp;
    for(int i=0;i<n;i++){
        int x = limit - arr[i];
        int y =  x/(2*k);
        int z = arr[i] + y*(2*k);
        temp.push_back({z,(z+k-1)});
    }
    sort(temp.begin(),temp.end());
    int start = INT_MIN;
    for(int i=0;i<temp.size();i++){
        start = max(start,temp[i].first);
    }
    for(int i=0;i<temp.size();i++){
        if(temp[i].second>=start){
            continue;
        } else {
            cout << -1 << endl;
            return;
        }
    }
    cout << start << endl;
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