#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            v.push_back({y, x});
        }
        sort(v.begin(), v.end());
        int cur = v[0].first;
        int dem = 1;
        for(int i = 1; i < v.size(); i++){
            if(v[i].second >= cur){
                cur = v[i].first;
                ++dem;
            }
        }
        cout << dem << endl;
    }
}