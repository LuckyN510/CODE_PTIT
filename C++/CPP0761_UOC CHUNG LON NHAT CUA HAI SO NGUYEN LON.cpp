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
    int t; cin >> t;
    while(t--)
    {
        ll a; cin >> a;
        cin.ignore();
        string b; cin >> b;
        ll res = 0;
        for(int i = 0; i < b.length(); i++)
        {
            res = res * 10 + b[i] - '0';
            res %= a;
        }
        cout << gcd(a, res) << endl;
    }   
}