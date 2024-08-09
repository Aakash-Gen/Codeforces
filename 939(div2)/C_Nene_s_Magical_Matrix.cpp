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
    // int n;
    // cin >> n;
    // vl rows(n);
    // vl cols(n);
    // for(int i=0;i<n;i++){
    //     cols[i] = (i+1)*n;
    // }
    // ll sum = ((n*(n+1))/2);
    // ll ans = sum*n;
    // ll op = n;
    // vi arr(n);
    // for(int i=0;i<n-1;i++){
    //     if(cols[i]!=sum){
    //         ans = ans - cols[i] + sum;
    //         op++;
    //         arr[i] = 1;
    //     }
    // }
    // if(n>2){
    //     op++;
    //     ans = ans- (2*n-1) + sum;
    // }
    // cout << ans << " " << op << endl;
    // for(int i=0;i<n;i++){
    //     cout << 1 << " "<< i+1 << " ";
    //     for(int i=1;i<=n;i++){
    //         if(i==n){
    //             cout << i << endl;
    //             break;
    //         }
    //         cout << i << " ";
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]==1){
    //         cout << 2 << " "<< i+1 << " ";
    //         for(int i=1;i<=n;i++){
    //         if(i==n){
    //             cout << i << endl;
    //             break;
    //         }
    //         cout << i << " ";
    //         }
    //     }
    // }

    int n;cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++) ans+=(2*i-1)*i;
	cout<<ans<<' '<<2*n<<endl;
	for(int i=n;i>=1;i--){
		cout<<"1 "<<i<<' ';
		for(int j=1;j<=n;j++) cout<<j<<' ';cout<<endl;
		cout<<"2 "<<i<<' ';
		for(int j=1;j<=n;j++) cout<<j<<' ';cout<<endl;
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