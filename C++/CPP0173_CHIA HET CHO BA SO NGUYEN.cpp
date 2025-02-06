#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) 
{
    while (b) 
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b) 
{
    return a / gcd(a, b) * b;
}

ll solve(ll n, ll x, ll y, ll z) 
{
    ll tmp = lcm(lcm(x, y), z);
    ll m = (ll)pow(10, n - 1);
    ll res = (m + tmp - 1) / tmp * tmp;
    if (res < (ll)pow(10, n))
        return res;
    else
        return -1;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        cout << solve(n, a, b, c) << endl;
    }
}
