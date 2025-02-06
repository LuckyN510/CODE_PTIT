#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mod = 1e9 + 7;

ll gcd(ll a, ll b) 
{
    while(b != 0)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll powMod(ll a, ll b) 
{
    if(b == 0) return 1;
    ll x = powMod(a, b / 2);
    if(b % 2 == 0) return (x * x) % mod;
    else return (((x * x) % mod) * a) % mod;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll g = a[0];
        for(int i = 1; i < n; i++) 
        {
            g = gcd(g, a[i]);
        }
        ll h = 1;
        for(int i = 0; i < n; i++) 
        {
            h = (h * a[i]) % mod;
        }
        ll res = powMod(h, g);
        cout << res << endl;
    }
}
