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
#define all(x) = x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;

void solve(){
    int n, m ,x;
    cin >> n >> m >> x;
    vector<pair<int,char>> arr(m);
    for(int i=0;i<m;i++){
        int a;
        char ch;
        cin >> a;
        cin >> ch;
        arr[i] = {a,ch};
    }


    unordered_set<int> res;
    res.insert(x);

    for (int i = 0; i < m; ++i) {
        unordered_set<int> new_res;
        for (int pos : res) {
            if (arr[i].second == '0') {
                if((arr[i].first + pos)>n){
                    new_res.insert((arr[i].first + pos) % n);
                } else {
                    new_res.insert(arr[i].first + pos);
                }
            } else if (arr[i].second == '1') {
                if((pos + n - arr[i].first)>n){
                    new_res.insert((pos + n - arr[i].first) % n);
                } else {
                    new_res.insert(pos + n - arr[i].first);
                }
            } else {
                if((arr[i].first + pos)>n){
                    new_res.insert((arr[i].first + pos) % n);
                } else {
                    new_res.insert(arr[i].first + pos);
                }
                if((pos + n - arr[i].first)>n){
                    new_res.insert((pos + n - arr[i].first) % n);
                } else {
                    new_res.insert(pos + n - arr[i].first);
                }
            }
        }
        res = new_res;
    }
    cout << res.size() << endl;
    vector<int> ans;
    for(int i: res){
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    for(int i: ans){
        cout << i << " ";
    }
    cout << endl;
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



    // int start =x;
    // stack<int> ans;
    // stack<int> st;
    // for(int i=0;i<m;i++){
    //     if(ans.empty()){
    //         if(arr[i].second=='0'){
    //             ans.push((arr[i].first+start)%n);
    //         } else if(arr[i].second=='1'){
    //             ans.push(start+n-arr[i].first);
    //         } else {
    //             ans.push((arr[i].first+start)%n);
    //             ans.push(start+n-arr[i].first);
    //         }
    //     } else {
    //         while(!ans.empty()){
    //             int temp = ans.top();
    //             ans.pop();
    //             if(arr[i].second=='0'){
    //                 st.push((arr[i].first+temp)%n);
    //             } else if(arr[i].second=='1'){
    //                 st.push(temp+n-arr[i].first);
    //             } else {
    //                 st.push((arr[i].first+temp)%n);
    //                 st.push(temp+n-arr[i].first);
    //             }
    //         }
    //         while(!st.empty()){
    //             ans.push(st.top());
    //             st.pop();
    //         }
            
    //     }
    // }
    // unordered_set<int> res;