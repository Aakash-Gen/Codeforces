// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long
// // // #define pii pair<int,int>
// // // #define vpii vector<pair<int,int>>
// // // #define vi vector<int>
// // // #define vvi vector<vector<int>>
// // // #define vl vector<long long>
// // // #define vvl vector<vector<long long>>
// // // #define pb push_back
// // // #define mp make_pair
// // // #define F first 
// // // #define unmp unordered_map<int,int>
// // // #define S second 
// // // #define all(x) x.begin(),x.end()
// // // #define sortasc(x) sort(all(x))
// // // #define sortdes(x) sort(x.rbegin(),x.rend())
// // // #define PI 3.1415926535897932384626
// // // const int mod = 1000000007;

// // // void solve(){
// // //     int x,y,k;
// // //     cin >> x >> y >> k;
// // //     int sum1 = k*x;
// // //     int sum2 = k*y;
// // //     if(k%2==1){
// // //         cout << sum1 << " " << sum2 << endl;
// // //         k-=1;
// // //         int i=sum1-1;
// // //         while(k>0){
// // //             cout << i << " " << i << endl;
// // //             cout << -i << " " << -i << endl;
// // //             i--;
// // //             k-=2;
// // //         }
// // //     } else {
// // //         cout << 2*sum1 << " " << 2*sum2 << endl;
// // //         cout << -sum1 << " " << -sum2 << endl;
// // //         k-=2;
// // //         int i=sum1-1;
// // //         while(k>0){
// // //             cout << i << " " << i << endl;
// // //             cout << -i << " " << -i << endl;
// // //             i--;
// // //             k-=2;
// // //         }
// // //     }
// // // }
// // // int main(){
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(NULL);
// // //     int t;
// // //     cin >> t;
// // //     while(t--){
// // //         solve();
// // //     }
// // //     return 0;
// // // }


// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define pii pair<int,int>
// // #define vpii vector<pair<int,int>>
// // #define vi vector<int>
// // #define vvi vector<vector<int>>
// // #define vl vector<long long>
// // #define vvl vector<vector<long long>>
// // #define pb push_back
// // #define mp make_pair
// // #define F first 
// // #define unmp unordered_map<int,int>
// // #define S second 
// // #define all(x) x.begin(),x.end()
// // #define sortasc(x) sort(all(x))
// // #define sortdes(x) sort(x.rbegin(),x.rend())
// // #define PI 3.1415926535897932384626
// // const int mod = 1000000007;

// // void solve(){
// //     int x, y, k;
// //     cin >> x >> y >> k;

// //     int sum1 = k * x;
// //     int sum2 = k * y;
// //     if(k%2==1){
        
// //     cout << sum1 << " " << sum2 << endl;

// //     k -= 1; 
    
// //     int i = 0;
// //     while (k>0) {
// //         if(i==sum1 && i==sum2){
// //             i++;
// //             continue;
// //         } else {
// //             cout << i << " " << i << " " << endl;
// //             cout << -i << " " << -i << " " << endl;
// //             i++;
// //             k-=2;
// //         }
// //     }
// //     } else {
        
// //     cout << 2*sum1 << " " << 2*sum2 << endl;
// //     cout << -sum1 << " " << -sum2 << endl;

// //     k -= 1; 
    
// //     int i = 0;
// //     while (k > 0) {
// //         if((i==sum1 && i==sum2) || (i==2*sum1 && i==2*sum2)){
// //             i++;
// //             continue;
// //         } else {
// //             cout << i << " " << i << " " << endl;
// //             cout << -i << " " << -i << " " << endl;
// //             i++;
// //             k-=2;
// //         }
// //     }
// //     }
// // }
// // int main(){
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     cin >> t;
// //     while(t--){
// //         solve();
// //     }
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;
// #define ll signed long long int
// #define vvint vector<vector<int> >
// #define vint vector<int>
// #define vll vector<ll>
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define mii map<int,int>
// #define umii unordered_map<int,int>
// #define all(x) x.begin,x.end
// #define sortasc(x) sort(all(x))
// #define rev(x) reverse(all(x))
// #define sortdes(x) sort(x.rbegin(), x.rend())
// #define PI 3.1415926535897932384626
// #define graphmap unordered_map<int,vint>
// #define graph vector<vector<int> >
// #define graphmapwithEdge unordered_map<int,pair<int,int> >
// #define graphwithEdge vector<pii>
// #define F first
// #define S second
// #define mp make_pair


// // Your definitions here


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     vi x, y;

//     int t;
//     cin >> t;

//     while(t--) {
//         //  int xc , yc, k;
//         //  cin >> xc >> yc >> k;

//         // x.clear();
//         // y.clear();


//         // if((k%2 )== 1){

//         //     x.push_back(xc);
//         //     y.push_back(yc);

//         //     for(int i = 1; i <= (k-1)/2 ; i++){
//         //         x.push_back(xc-i);
//         //         x.push_back(xc+i);
//         //         y.push_back(yc-i);
//         //         y.push_back(yc+i);
//         //     }
//         // }else{
//         //     for(int i = 1; i <= (k+1)/2 ; i++){
//         //         x.push_back(xc-i);
//         //         x.push_back(xc+i);
//         //         y.push_back(yc-i);
//         //         y.push_back(yc+i);
//         //     }
//         // }

//         // for(int i = 0 ; i < x.size(); i++){
//         //     cout << x[i] << " " << y[i] << endl;
//         // }
//     }
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define pb push_back
#define mp make_pair
#define F first 
#define unmp unordered_map<int,int>
#define S second 
#define all(x) x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;


void solve(){
    int x1 , y1, k;
         cin >> x1 >> y1 >> k;
         vi x,y;

        if((k%2 )== 1){

            x.push_back(x1);
            y.push_back(y1);

            for(int i = 1; i <= (k-1)/2 ; i++){
                x.push_back(x1-i);
                x.push_back(x1+i);
                y.push_back(y1-i);
                y.push_back(y1+i);
            }
        }else{
            for(int i = 1; i <= (k+1)/2 ; i++){
                x.push_back(x1-i);
                x.push_back(x1+i);
                y.push_back(y1-i);
                y.push_back(y1+i);
            }
        }

        for(int i = 0 ; i < x.size(); i++){
            cout << x[i] << " " << y[i] << endl;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}