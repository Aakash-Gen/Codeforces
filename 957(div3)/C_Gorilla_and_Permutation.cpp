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
    int n, m ,k;
    cin >> n >> m >> k;
    vi arr;
    vi temp;
    for(int i=n;i>=1;i--){
        if(i>m){
            arr.push_back(i);
        } else {
            temp.push_back(i);
        }
    }
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        arr.push_back(temp[i]);
    }
    for(int i=0;i<n;i++){
        cout<< arr[i];
        if(i!=n-1){
            cout << " ";
        }
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