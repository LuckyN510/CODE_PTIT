#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
vector<long long> dp(5001);

void Catalan() {
    dp[0] = 1;  
    for (int i = 1; i <= 5000; i++) {
        dp[i] = 0;
        for (int j = 0; j < i; j++) {
            dp[i] = (dp[i] + dp[j] * dp[i - j - 1]) % MOD;
        }
    }
}

int main() {
    int n;
    cin >> n;
    Catalan();
    cout << dp[n + 1] << endl;
    return 0;
}
