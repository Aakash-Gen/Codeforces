#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int ans = 0;
        if(2*a>b){
            ans= (n/2)*b + (n%2)*a;
        } else {
            ans = n*a;
        }
        cout << ans << endl;
    }
}