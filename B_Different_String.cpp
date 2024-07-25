#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin >> s;
        bool same = true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                continue;
            } else {
                same = false;
            }
        }
        if(same){
            cout << "NO" << endl;
        } else {
            for(int i=0;i<s.size()-1;i++){
                if(s[i]!=s[i+1]){
                    swap(s[i],s[i+1]);
                }
            }
            cout << "YES" << endl;
            cout<< s << endl;
        }
    }
}