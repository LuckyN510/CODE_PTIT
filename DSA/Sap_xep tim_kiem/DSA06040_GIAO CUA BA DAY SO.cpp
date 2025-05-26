#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){    
        int n, m, k; cin >> n >> m >> k;
        ll a[n], b[m], c[k];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        for(int i = 0; i < k; i++){
            cin >> c[i];
        }
        bool check = false;
        int index1 = 0, index2 = 0, index3 = 0;
        while(index1 < n && index2 < m && index3 < k){
            if(a[index1] == b[index2] && b[index2] == c[index3]){
                cout << a[index1] << " ";
                check = true;
                ++index1;
                ++index2;
                ++index3;
            }
            else if(a[index1] < b[index2]){
                ++index1;
            }
            else if(b[index2] < c[index3]){
                ++index2;
            }
            else if(c[index3] < a[index1]){
                ++index3;
            }
        }
        if(!check) cout << "-1";
        cout << endl;
    }
}