#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<vector<int>> mappingA, mappingB;
    vector<int> mapA, mapB;
    while(t--){
        int n , q;
        cin >> n >> q;
        string a;
        cin >> a;
        string b;
        cin >> b;
        vector<vector<int>> queries(q,vector<int>(2));
        for(int i=0;i<q;i++){
            cin >> queries[i][0] >> queries[i][1];
        }
        mappingA.resize(n+1);
        mappingB.resize(n+1);
        mapB.resize(26,0);
        mapA.resize(26,0);
        mappingA[0] = mapA;
        mappingB[0] = mapB;
        for(int i=1;i<=n;i++){
            mapA[a[i-1]-'a']++;
            mapB[b[i-1]-'a']++;
            mappingB[i] = mapB;
            mappingA[i] = mapA;
        }
        for(int i=0;i<q;i++){
            int l = queries[i][0] -1;
            int r = queries[i][1];
            int cnt =0;
            for(int j=0;j<26;j++){
                cnt += abs((mappingA[l][j]-mappingA[r][j]) - (mappingB[l][j]-mappingB[r][j]));
            }
            cout << cnt/2 << endl;
        }
    }
    return 0;
}