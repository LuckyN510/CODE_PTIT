#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll res(ll a, ll b)
{
    ll c = a * a + b * b;
    int k = sqrt(c);
    if(k * k == c) return k;
    else return 0;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        bool find = 0;
        for(int i = 0; i < n - 2; i++)
        {
            for(int j = i + 1; j < n - 1; j++)
            {
                ll k = res(a[i], a[j]);
                if(k != 0 && binary_search(a + j + 1, a + n, k))
                {
                    find = 1;
                    break;
                }
            }
            if(find) break;
        }
        if(find) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}