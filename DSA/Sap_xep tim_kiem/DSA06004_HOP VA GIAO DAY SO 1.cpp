#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        set<int> se1, se2;
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            se1.insert(a[i]);
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            if(se1.count(b[i])){
                v.push_back(b[i]);
            }
            se1.insert(b[i]);
        }
        for(int x : se1){
            cout << x << " ";
        }
        cout << endl;
        for(int x : v){
            cout << x << " ";
        }
        cout << endl;
    }
}