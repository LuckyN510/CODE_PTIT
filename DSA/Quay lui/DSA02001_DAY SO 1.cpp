#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> res;

void Try(int n, int a[]){
    if(n < 1){
        return;
    }
    int tmp[n - 1];
    for(int i = 0; i < n - 1; i++){
        tmp[i] = a[i] + a[i + 1];
    }
    Try(n - 1, tmp);
    vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(a[i]);
    }
    res.push_back(v);
}
int main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        Try(n, a);
        reverse(res.begin(), res.end());
        for(auto x : res){
            cout << "[";
            for(int j = 0; j < x.size(); j++){
                cout << x[j];
                if(j != x.size() - 1){
                    cout << " ";
                }
            }
            cout << "]\n";
        }
    }
}