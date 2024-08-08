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
    string s;
    cin >> s;
    string t;
    cin >> t;
    // string temp ="";
    int n = t.size();
    int i =0;
    for (char &c : s) {
        if (c == '?') {
            if (i < n) {
                c = t[i];
                i++;
            } else {
                c = 'a';
            }
        } else if (i < n && c == t[i]) {
            i++;
        }
    }
    int j = 0;
    for (char c : s) {
        if (j < n && c == t[j]) {
            j++;
        }
    }

    if (j == n) {
        cout << "YES" << endl;
        cout << s << endl; 
    } else {
        cout << "NO" << endl;
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


