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
        vector<vector<int>> res;
        for(int i = 0; i < n - 1; i++){
            vector<int> v;
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                    swap(a[i], a[j]);
                }
            }
            for(int j = 0; j < n; j++){
                v.push_back(a[j]);
            }
            res.push_back(v);
        }
        for(int i = res.size() - 1; i >= 0; i--){
            cout << "Buoc " << i + 1 << ": ";
            for(int j = 0; j < n; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}