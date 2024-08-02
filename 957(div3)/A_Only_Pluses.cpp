#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int a , b , c;
        cin>> a>>b>>c;
        vector<int> arr(3);
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        int ans = INT_MIN;
        for(int i=0;i<5;i++){
            sort(arr.begin(),arr.end());
            arr[0]+=1;
            ans = max(ans,(arr[0]*arr[1]*arr[2]));
        }
        cout<< ans<< endl;
    }
    return 0;
}