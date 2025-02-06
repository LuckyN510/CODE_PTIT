#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[101];

void Fibo()
{
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
}

int main()
{
    Fibo();
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        bool ok = 0;
        for(int i = 0; i <= 100; i++)
        {
            if(F[i] == n)
            {
                ok = 1;
            } 
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}