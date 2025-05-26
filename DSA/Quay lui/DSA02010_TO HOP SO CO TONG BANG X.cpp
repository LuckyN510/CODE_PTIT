#include <bits/stdc++.h>

using namespace std;

int n, k, x[1001], a[1001];
vector<vector<int>> res;

void in(int i) {
    vector<int> v;
    for (int j = 1; j <= i; j++) { 
        v.push_back(x[j]); 
    }
    res.push_back(v);
}

void Try(int i, int pos, int sum) {
    for (int j = pos; j <= n; j++) {
        if (sum + a[j] <= k) {
            x[i] = a[j];
            if (sum + a[j] == k) {
                in(i); 
            }
            else {
                Try(i + 1, j, sum + a[j]);  
            }
        }
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        cin >> n >> k;
        res.clear();
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        Try(1, 1, 0); 
        if (res.size() == 0) {
            cout << "-1" << endl;
            continue;
        }
        for (auto x : res) {
            cout << "[";
            for (int j = 0; j < x.size(); j++) {
                cout << x[j];
                if (j != x.size() - 1) {
                    cout << " ";  
                }
            }
            cout << "]";
        }
        cout << endl;
    }
}
