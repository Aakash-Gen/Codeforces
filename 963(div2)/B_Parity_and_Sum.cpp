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
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    ll oddcnt=0;
    ll evencnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencnt++;
        } else {
            oddcnt++;
        }
    }
    if(evencnt==n){
        cout << 0 << endl;
        return;
    }
    if(oddcnt==n){
        cout << 0 << endl;
        return;
    }
    ll cnt =0;
    ll maxi = 0;
    int index =0;
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--){
        if(arr[i]%2==1){
            maxi = arr[i];
            index =i;
            break;
        }
    }
    if(index>0){ 
        for(int i=0;i<index;i++){
            if(arr[i]%2==0){
                if(maxi>arr[i]){
                    cnt++;
                    maxi+= arr[i];
                } else {
                    cnt+=2;
                    maxi+= 2*arr[i];
                }
            }
        }
    }
    for(int i=n-1;i>index;i--){
        if(arr[i]%2==0){
            if(maxi>arr[i]){
                cnt++;
                maxi+= arr[i];
            } else {
                cnt+=2;
                maxi+= 2*arr[i];
            }
        }
    }
    cout << cnt << endl;
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