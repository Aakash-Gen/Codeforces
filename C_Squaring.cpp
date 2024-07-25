#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        long long cnt =0;
        bool isInfinteLoop = false;
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                continue;
            }else{
                while(arr[i]<arr[i-1]){
                    if(arr[i]==0){
                        arr[i]=1;
                    }
                    arr[i] *= arr[i];
                    cnt++;
                    if(cnt>100000){
                        isInfinteLoop = true;
                        break;
                    }
                }
                if(isInfinteLoop){
                    break;
                }
            }
        }
        if(isInfinteLoop){
            cout << -1 << endl;
        } else {
            cout << cnt << endl;
        }
    }
}