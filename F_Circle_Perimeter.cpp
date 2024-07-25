#include<bits/stdc++.h> 
using namespace std ;
 
unsigned int calc(unsigned int r){
    unsigned int ans = 0 ;
    unsigned int R = (r+1)*(r+1) ; 
    int curr = 1 ;
    for(int i = r ; i>0 ; i--){
        for(int j = curr ; j<=r ; j++){
            if(i*i + j*j < R){
                ans++ ;
            }
            else{
                curr = j ;
                ans += j-1 ;
                // cout << "for i =" << i << " points = "<< j-1 << endl ; 
                break ;
            }
        }
    }
    ans = 4*(ans+r) ;
    return ans ;
}

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        unsigned int r ;
        cin >> r ;
        unsigned int res1 = calc(r) ;
        // cout << res1 << " " ;
        unsigned int res2 = calc(r-1) ;
        // cout << res2 << " ";
        int res = res1 - res2 ;
        cout << res << endl ;
    }
    return 0 ;
}