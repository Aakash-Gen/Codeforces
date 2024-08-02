// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         int n , c, d;
//         cin >> n >> c >> d;
//         vector<int> arr(n*n);
//         for(int i=0;i<n*n;i++){
//             cin >> arr[i];
//         }
//         sort(arr.begin(),arr.end());
//         int a = arr[0];
//         unordered_map<int,int> mpp;
//         for(int i=0;i<arr.size();i++){
//             mpp[arr[i]]++;
//         }
//         // vector<vector<int>> mat(n,vector<int>(n,0));
//         // mat[0][0] = a;
//         // for(int i=0;i<n;i++){
//         //     if(i>0){
//         //         mat[i][0] = mat[i-1][0] + c;
//         //     }
//         //     for(int j=0;j<n;j++){
//         //         if(j>0){
//         //             mat[i][j] = mat[i][j-1] + d;
//         //         }
//         //     }
//         // }
//         vector<int> mat(n*n);
//         int r=1;
//         int c=2;
//         mat[0] = a;
//         while(r<n && c<n){
//             mat[r] = mat[r-1] + c;
//             r+=2;
//             mat[c] = mat[c-2] + d;
//         }
//         bool notfound = false;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(mpp.find(mat[i][j])!=mpp.end()){
//                     mpp[mat[i][j]]--;
//                     if(mpp[mat[i][j]]==0){
//                         mpp.erase(mat[i][j]);
//                     }
//                 } else {
//                     notfound = true;
//                     break;
//                 }
//             }
//             if(notfound){
//                 break;
//             }
//         }
//         if(notfound){
//             cout << "NO" <<endl;
//         } else {
//             cout<< "YES" << endl;
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> mpp;
    int t;
    cin >>t;
    while(t--){
        int n , c, d;
        cin >> n >> c >> d;
        vector<int> arr(n*n);
        for(int i=0;i<n*n;i++){
            cin >> arr[i];
        }
        int mini = INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<mini){
                mini = arr[i];
            }
        }
        int a = mini;
        mpp.clear();
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        vector<vector<int>> mat(n,vector<int>(n,0));
        mat[0][0] = a;
        for(int i=0;i<n;i++){
            if(i>0){
                mat[i][0] = mat[i-1][0] + c;
            }
            for(int j=0;j<n;j++){
                if(j>0){
                    mat[i][j] = mat[i][j-1] + d;
                }
            }
        }
        bool notfound = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mpp[mat[i][j]]>0){
                    mpp[mat[i][j]]--;
                } else {
                    notfound = true;
                    break;
                }
            }
            if(notfound){
                break;
            }
        }
        if(notfound){
            cout << "NO" <<endl;
        } else {
            cout<< "YES" << endl;
        }
    }
}