#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll a, b, c;

ll mulNumber(ll a, ll b)
{
    if(b == 0) return 0;
    ll ans = mulNumber(a, b / 2);
    ans = (ans + ans) % c;
    if(b % 2 == 1) return ans = (ans + a) % c;
    return ans;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        cout << mulNumber(a, b) << endl;
    }
}