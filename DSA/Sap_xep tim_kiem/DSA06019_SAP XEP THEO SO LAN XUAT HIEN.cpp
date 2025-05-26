#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        vector<pair<int, int>> v;
        vector<int> v1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        
        }
        for(int i = 0; i < n; i++){
            v.push_back({a[i], mp[a[i]]});
        }
        sort(v.begin(), v.end(), cmp);
        for(auto it : v){
            cout << it.first << " ";
        }
        cout << endl;
    }
}