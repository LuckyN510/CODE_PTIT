#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        if (mp.find(k) == mp.end()){ 
            cout << "-1\n"; 
        } 
        else{
            cout << mp[k] << "\n";  
        }
    }
}
