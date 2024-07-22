// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, f, k;
//         cin >> n >> f >> k;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             int Q;
//             cin >> Q;
//             arr[i] = Q;
//         }
//         int x = arr[f-1];
//         sort(arr.begin(),arr.end());
//         reverse(arr.begin(),arr.end());
//         int tot =0;
//         for(int i=0;i<n;i++){
//             if(arr[i]==x){
//                 tot++;
//             }
//         }
//         int cnt =0;
//         for(int i=0;i<k;i++){
//             if(arr[i]==x){
//                 cnt++;
//             }
//         }
//         if(cnt==tot){
//             cout << "YES" << endl;
//         } else if(cnt<tot && cnt!=0){
//             cout<< "MAYBE" << endl;
//         } else {
//             cout<< "NO" << endl;
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n , f , k;
        cin >> n >> f >> k ;
        vector<int> arr(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        int lowerlimit = 0 ; 
        int upperlimit = 0 ;
        for(int i:arr){
            if(i>arr[f-1]){
                lowerlimit++ ;
                upperlimit++ ;
            }
            else if(i==arr[f-1]){
                upperlimit++ ;
            }
        }
        if(k<=lowerlimit){
            cout << "NO" << endl ;
        }
        else if(lowerlimit < k && k < upperlimit){
            cout << "MAYBE" << endl ;
        }
        else if(k >= upperlimit){
            cout << "YES" << endl ;
        }
    }
  return 0 ;
}