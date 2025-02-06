#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll M;

ll powMod(ll a, ll b)
{
    if(b == 0) return 1;
    ll x = powMod(a, b / 2);
    if(b % 2 == 0) return (x * x) % M;
    else return (((x * x) % M) * a) % M;
}

ll change(string &s)
{
    ll res = 0;
    for(int i = 0; i < s.length(); i++)
    {
        res = res * 10 + s[i] - '0';
        res %= M;
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string a;
        ll b;
        cin >> a >> b >> M;
        ll k = change(a);
        cout << powMod(k, b) << endl;
    }
}

