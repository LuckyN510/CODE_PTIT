#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, n, k;
        cin >> m >> n >> k;
        int a[m], b[n];
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int i = 0, j = 0;
        vector<int> res;
        while(i < m && j < n){
            if(a[i] <= b[j]){
                res.push_back(a[i]);
                ++i;
            } 
            else{
                res.push_back(b[j]);
                ++j;
            }
        }
        while(i < m){
            res.push_back(a[i]);
            ++i;
        }
        while(j < n){
            res.push_back(b[j]);
            ++j;
        }
        cout << res[k - 1] << endl;
    }
}