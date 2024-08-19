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
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int ans =0;
    bool bob = false;
    int prev = 0;
    while(!pq.empty()){
        if(!bob){
            ans+= pq.top();
            prev = pq.top();
        } else {
            ans -= pq.top();
            if(k>=prev-pq.top()){
                ans -= (prev - pq.top());
                k-= (prev-pq.top());
            } else {
                ans -= k;
                k =0;
            }
            
        }
        bob = !bob;
        pq.pop();
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