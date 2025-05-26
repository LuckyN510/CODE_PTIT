#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main() {
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            v.push_back({a[i], abs(k - a[i])});
        }
        stable_sort(v.begin(), v.end(), cmp);
        for (auto x : v) {
            cout << x.first << " ";
        }
        cout << endl;
    }
}