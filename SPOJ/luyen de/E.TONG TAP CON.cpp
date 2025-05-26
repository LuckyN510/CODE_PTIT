#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> dp(s + 1, 0);
    dp[0] = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--) {
            dp[j] += dp[j - a[i]];
        }
    }
    // Nếu s=0 thì trừ trường hợp dãy con rỗng
    int ans = dp[s];
    if (s == 0) ans -= 1;

    cout << ans << endl;
    return 0;
}
