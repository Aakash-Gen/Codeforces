#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<vector<int>> mat(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char x;
                cin >> x;
                int y = x - '0';
                mat[i][j] = y;
            }
        }
        vector<vector<int>> ans(n/k,vector<int>(n/k));
        for(int i=0;i<n/k;i++){
            for(int j=0;j<n/k;j++){
                ans[i][j] = mat[i*k][j*k];
                char x = ans[i][j] + '0';
                cout << x;
            }
            cout << endl;
        }
    }
}