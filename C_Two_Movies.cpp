
#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            int Q;
            cin>> Q;
            a[i] = Q;
        }
        for(int i=0;i<n;i++){
            int Q;
            cin>> Q;
            b[i] = Q;
        }
        int A =0 , B =0;
        int pos=0, neg=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                A+= a[i];
            } else if(b[i]>a[i]){
                B+= b[i];
            } else {
                if(a[i]>0){
                    pos++;
                } else if(a[i]<0){
                    neg++;
                }
            }
        }
        int ans = INT_MIN;
        for(int i=-neg; i<=pos;i++){
            ans = max(ans,min(A+ i,B + (pos-neg-i)));
        }
        cout << ans << endl;
    }
    return 0;
}
