#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt =0;
        cnt = n/4;
        n = n%4;
        cnt+= n/2;
        cout << cnt << endl;
    }
}