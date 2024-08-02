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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k =0;
    vector<int> ans;
    while((accumulate(arr.begin(),arr.end(),0)>0) && (k<40)){
        int maxi = *max_element(arr.begin(),arr.end());
        int mini = *min_element(arr.begin(),arr.end());
        int mid = (maxi+mini)/2;
        ans.push_back(mid);
        for(int i=0;i<n;i++){
            arr[i] = abs(arr[i]-mid);
        }
        k++;
    }
    if(k>40){
        cout << -1 << endl;
    } else {
        cout << ans.size() << endl;
        if(ans.size()==0){
            cout << endl;
            return;
        }
        for(int i=0;i<ans.size()-1;i++){
            cout << ans[i] << " ";
        }
        cout << ans[ans.size()-1];
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

