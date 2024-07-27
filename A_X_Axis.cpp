// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int x1,x2, x3;
//         cin >> x1 >>x2 >> x3;
//         vector<int> arr;
//         arr.push_back(x1);
//         arr.push_back(x2);
//         arr.push_back(x3);
//         sort(arr.begin(),arr.end());

//         cout << (abs(arr[1]-arr[0]) + abs(arr[2]-arr[1])) << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x1,x2, x3;
        cin>> x1 >>x2 >>x3;
        int a = min({x1,x2,x3});
        int c = max({x1,x2,x3});
        
        int b = (x1+x2+x3) - (a+c);
        
        cout << abs(a-b) + abs(c-b) << endl;
    }
}