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
    vi arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vector<string> vs(m);
    for(int i=0;i<m;i++){
        string s;
        cin >> s;
        vs[i] =s;
    }
    for (int i = 0; i < m; i++) {
        string s = vs[i];
        if (arr.size() != s.size()) {
            cout << "NO" << endl;
            continue;
        }

        unordered_map<char, int> char_to_int;
        unordered_map<int, char> int_to_char;
        bool is_possible = true;

        for (int j = 0; j < s.size(); j++) {
            char c = s[j];
            int value = arr[j];

            if (char_to_int.count(c) && char_to_int[c] != value) {
                is_possible = false;
                break;
            }

            if (int_to_char.count(value) && int_to_char[value] != c) {
                is_possible = false;
                break;
            }

            char_to_int[c] = value;
            int_to_char[value] = c;
        }

        if (is_possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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