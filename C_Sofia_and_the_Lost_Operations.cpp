#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            int Q;
            cin>>Q;
            arr[i] = Q;
        }
        vector<int> newArr(n);
        for(int i=0;i<n;i++){
            int q;
            cin>> q;
            newArr[i] = q;
        }
        int m;
        cin>> m;
        vector<int> modif(m);
        for(int i=0;i<m;i++){
            int q;
            cin>>q;
            modif[i] = q;
        }

        int lastIndex =-1;
        bool ans = true;
        for(int i=0;i<n;i++){
            if(arr[i]==newArr[i]) continue;
            else {
                bool found = false;
                for(int j=lastIndex+1;j<m;j++){
                    if(newArr[i]==modif[j]){
                        found = true;
                        lastIndex = j;
                        break;
                    }
                }
                if(!found){
                    ans = false;
                    break;
                }
            }
        }
        if(ans){
            cout<< "YES" << endl;
        } else {
            // cout << "NO" << endl;
            int lastIndex = -1;
            ans= true;
            for(int i=n-1;i>=0;i--){
                if(arr[i]==newArr[i]) continue;
                else {
                    bool found = false;
                    for(int j=lastIndex+1;j<m;j++){
                    if(newArr[i]==modif[j]){
                        found = true;
                        lastIndex = j;
                        break;
                    }
                }
                    if(!found){
                        ans= false;
                        break;
                    }
                }
            }
            if(ans){
                cout<< "YES" << endl;
            } else {
                cout<< "NO" << endl;
            }
        }
    }
}