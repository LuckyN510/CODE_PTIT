#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll res = 0;
        for(ll i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                while(n % i == 0)
                {
                    n /= i;
                }
                res = max(res, i);
            }
        }
        if(n > 1) res = max(res, n);
        cout << res << endl;
    }
}