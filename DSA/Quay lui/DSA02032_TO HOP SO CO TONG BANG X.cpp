#include<bits/stdc++.h>

using namespace std;

int n, k, x[101], a[101];
vector<vector<int>> res;

void in(int i){
    vector<int> v;
    for(int j = 1; j <= i; j++){
        v.push_back(x[j]);
    }
    res.push_back(v);
}

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= k){
            x[i] = a[j];
            if(sum + a[j] == k){
                in(i);
            }
            else
                Try(i + 1, j, sum + a[j]);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1, 1, 0);
        if(res.size() == 0){
            cout << "-1" << endl;
            continue;
        }
        cout << res.size() << " ";
        for(auto it : res){
            cout << "{";
            for(int j = 0; j < it.size(); j++){
                cout << it[j];
                if(j != it.size() - 1){
                    cout << " ";
                }
            }
            cout << "} ";
        }
        cout << endl;
    }
}