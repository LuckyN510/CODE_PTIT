#include <bits/stdc++.h>
using namespace std;

long long cnt;

void combine(vector<long long>& a, int l, int m, int r) {
    vector<long long> v;
    int i = l, j = m + 1;
    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            v.push_back(a[i++]);
        } else {
            v.push_back(a[j++]);
            cnt += m - i + 1; 
        }
    }
    while (i <= m) v.push_back(a[i++]);
    while (j <= r) v.push_back(a[j++]);

    for (int k = l; k <= r; k++) {
        a[k] = v[k - l];
    }
}

void mergeSort(vector<long long>& a, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        combine(a, l, m, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cnt = 0;
        mergeSort(a, 0, n - 1);
        cout << cnt << '\n';
    }
    return 0;
}
