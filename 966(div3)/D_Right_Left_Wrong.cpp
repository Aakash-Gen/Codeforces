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
    vl arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    string s;
    cin >> s;
    
    vl prefix(n);
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    vl left, right;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            left.push_back(i);
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'R'){
            right.push_back(i);
        }
    }

    ll sum = 0;
    int i = 0;
    while(i < left.size() && i < right.size()){
        int start = left[i];
        int end = right[i];
        if (start <= end) {
            sum += prefix[end] - (start > 0 ? prefix[start-1] : 0);
        }
        i++;
    }
    
    cout << sum << endl;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vi prefix;
    while(t--){
        solve();
    }
    return 0;
}



