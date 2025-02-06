#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll p;

ll powMod(ll a, ll b)
{
    if(b == 0) return 1;
    ll x = powMod(a, b / 2);
    if(b % 2 == 0) return (x * x) % p;
    else return (((x * x) % p) * a) % p;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll x, y;
        cin >> x >> y >> p;
        ll res = powMod(x, y);
        cout << res << endl;
    }
}