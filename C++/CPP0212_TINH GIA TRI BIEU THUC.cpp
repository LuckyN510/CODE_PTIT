#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9 + 7;

ll powMod(int a, int b)
{
    if(b == 0) return 1;
    ll x = powMod(a, b / 2);
    if(b % 2 == 0) return x * x % mod;
    else return (((x * x) % mod) * a) % mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        ll res = 0;
        for (int i = 1; i <= n; i++) {
            res = (res + a[i] * powMod(x, n - i)) % mod;
        }
        cout << res << endl;
    }
}