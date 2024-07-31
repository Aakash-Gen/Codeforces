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
#define all(x) = x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;

void solve(){
    string s;
    cin >> s;
    string ans ="";
    ans+=s[0];
    bool insert = false;
    for(int i=1;i<s.size();i++){
        if(insert==false && s[i]==s[i-1]){
            if(s[i]!='a'){
                ans+= s[i]-1;
            } else {
                ans+= s[i]+1;
            }
            insert = true;
        }
        ans+=s[i];
    }
    if(!insert){
        if(s[s.size()-1]!='a'){
            ans+= s[s.size()-1]-1;
        } else {
            ans+= s[s.size()-1]+1;
        }
    }
    cout << ans << endl;
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