#include <bits/stdc++.h>
using namespace std;

int n, k, a[1001], s;
int res = 0;

void Try(int pos, int groups, int sum) {
    if (pos == n + 1) {
        if (groups == k) res++;
        return;
    }

    int tempSum = 0;
    for (int i = pos; i <= n; i++) {
        tempSum += a[i];
        if (tempSum == s) {
            Try(i + 1, groups + 1, 0);
        }
    }
}

int main() {
    cin >> n >> k;
    s = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s += a[i];
    }

    if (s % k != 0) {
        cout << "0\n";
        return 0;
    }

    s /= k;
    Try(1, 0, 0);
    cout << res << "\n";
    return 0;
}
