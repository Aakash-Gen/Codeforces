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
    string b;
    cin >> b;
    unordered_set<char> st;
    for(int i=0;i<n;i++){
        st.insert(b[i]);
    }
    string s;
    for(char ch: st){
        s+= ch;
    }
    // cout << s << endl;
    sort(s.begin(),s.end());
    unordered_map<char,char> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]] = s[s.size()-i-1];
    }
    for(int i=0;i<n;i++){
        b[i] = mpp[b[i]];
    }
    cout << b << endl;
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