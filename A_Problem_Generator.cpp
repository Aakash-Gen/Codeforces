#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> arr(7);
        for(int i=0;i<n;i++){
            arr[s[i]-'A']++;
        }
        int cnt =0;
        while(m--){
            for(int i=0;i<7;i++){
                if(arr[i]==0) {
                    cnt++;
                } else {
                    arr[i]--;
                }
            }
        }
        cout << cnt << endl;
    }
}