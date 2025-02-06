#include<bits/stdc++.h>

using namespace std;
using ll = long long;

#define maxn 1000005

int P[maxn];

void sieve()
{
    for(int i = 0; i < maxn; i++) 
    {
        P[i] = 1; 
    }
    P[0] = P[1] = 0;
    for(int i = 2; i <= sqrt(maxn); i++) 
    {
        if(P[i])
        {
            for(int j = i * i; j < maxn; j += i) 
            {
                P[j] = 0; 
            }
        }
    }
}

int main()
{
    sieve();
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        int cnt = 0;
        for(int i = 2; i < maxn; i++)
        {
            if(P[i]) 
            {
                ll square = 1ll * i * i;
                if(square <= n)
                {
                    ++cnt;
                }
                else 
                {
                    break;
                }
            }
        }
        cout << cnt << endl; 
    }
    return 0;
}
