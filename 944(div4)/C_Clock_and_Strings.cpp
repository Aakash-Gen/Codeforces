#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> arr;
        if(a>b) {
            int temp = a;
            a = b;
            b= temp;
        }
        for(int i=a;i<=b;i++){
            arr.push_back(i);
        }

        bool foundc = false;
        bool foundd = false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==c){
                foundc = true;
            }
            if(arr[i]==d){
                foundd = true;
            }
        }
        if(foundc && foundd){
            cout << " NO" << endl;
        } else if (!foundc && !foundd){
            cout << "NO" << endl;
        } else {
            cout<< "YES" << endl;
        }
    }
}