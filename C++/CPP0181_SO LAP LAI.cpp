#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        ll x, y;
        cin >> a >> x >> y;
        ll d = gcd(x, y);
        while (d--)
        {
            cout << a;
        }
       cout << endl;
    }
    
}