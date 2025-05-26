#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int res = a[0];
        int maxEnding = a[0];
        for(int i = 1; i < n; i++){
            maxEnding = max(maxEnding + a[i], a[i]);
            res = max(res, maxEnding);
        }
        cout << res << endl;
    }
}