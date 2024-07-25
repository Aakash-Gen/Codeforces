#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ogk = k;
        int i=n-1;
        int cnt =1;
        k= k-n; // 40 
        while(k>0 && i>0){
            if(k>=2*i){
                cnt+= 2; // 3 // 5/ 8 // 7
                k -= 2*i; // 22 // 6
            } else if(k>=i){
                cnt++;
                k-= i;
            }else 
             {
                cnt++; // 6
                k=0; // -1
            }
            i--;
        }
        if(ogk==0){
            cout << 0 << endl;
        } else {
            cout << cnt << endl;
        }
    }
}