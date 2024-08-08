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
    int n,m,k;
    cin >> n >> m >> k;
    vi a(n);
    vi b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    vi arr(k+1);
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]<=k && arr[a[i]]==0){
            arr[a[i]]++;
            cnt1++;
        }
    }
    vi arr2(k+1);
    for(int i=0;i<m;i++){
        if(b[i]<=k && arr2[b[i]]==0){
            arr2[b[i]]++;
            cnt2++;
        }
    }
    if(cnt1>=k/2 && cnt2>=k/2){
        for(int i=1;i<k+1;i++){
            if(arr[i] || arr2[i]){
                continue;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        return;
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