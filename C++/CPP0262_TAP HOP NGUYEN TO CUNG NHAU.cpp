#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, m; cin >> n >> m;
        ll sum = n * (n + 1) / 2;
        ll a = (sum + m) / 2;
        ll b = sum - a;
        bool ok = 0;
        if(a - b == m && __gcd(a, b) == 1)
        {
            ok = 1;
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}