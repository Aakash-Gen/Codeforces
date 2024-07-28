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
    int n;
    cin >> n;
    if(n<6){
        if(n==1){
            cout << 1 << endl <<  "1" << endl;
        } else if(n==2){
            cout << 2 << endl << "1 2" << endl;
        } else if(n==3){
            cout << 2 << endl << "1 2 2" << endl;
        } else if(n==4){
            cout << 3 << endl << "1 2 2 3" << endl;
        } else if(n==5){
            cout << 3 << endl << "1 2 2 3 3" << endl;
        } 
    } else {
        cout << 4 << endl;
        for(int i=1;i<=n;i++){
            if(i==n){
                cout << i%4+1;
            } else {
                cout << i%4 + 1 << " ";
            }
        }
        cout << endl;
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