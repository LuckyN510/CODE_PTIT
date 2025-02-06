#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[101];

void Fibo()
{
    F[1] = 1;
    F[2] = 1;
    for(int i = 3; i <= 92; i++)
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
        cout << F[n] << endl;
    }
}