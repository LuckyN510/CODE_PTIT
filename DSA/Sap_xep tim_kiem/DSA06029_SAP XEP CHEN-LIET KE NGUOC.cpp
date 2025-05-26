#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<vector<int>> res;
    int key = 0, pos = 0;
    for(int i = 0; i < n; i++){
        key = a[i];
        pos = i - 1;
        while(pos >= 0 && a[pos] > key){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = key;
        vector<int> v;
        for(int j = 0; j <= i; j++){
            v.push_back(a[j]);
        }
        res.push_back(v);
    }
    for(int i = res.size() - 1; i >= 0; i--){
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}