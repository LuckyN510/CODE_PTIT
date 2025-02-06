#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        if (n == 1) 
        {
            cout << a[1] << endl;
            continue;
        }
        ll dp[n + 1];
        dp[1] = a[1];
        dp[2] = max(a[1], a[2]);
        for(int i = 3; i <= n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        }
        cout << dp[n] << endl;
    }
}