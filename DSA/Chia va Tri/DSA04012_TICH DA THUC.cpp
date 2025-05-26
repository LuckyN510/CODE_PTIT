#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int p[n], q[m];
        int res[(n - 1) + (m - 1) + 1] = {0};
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }
        for(int i = 0; i < m; i++){
            cin >> q[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res[i + j] += p[i] * q[j];
            }
        }
        for(int x : res){
            cout << x << " ";
        }
        cout << endl;
    }
}