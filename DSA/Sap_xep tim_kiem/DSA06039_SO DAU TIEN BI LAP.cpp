#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({a[i], mp[a[i]]});
        }
        bool check = false;
        for(auto it : v){
            if(it.second > 1){
                cout << it.first << endl;
                check = true;
                break;
            }
        }
        if(!check) cout << "NO\n";
    }
}