#include<bits/stdc++.h>

using namespace std;
int P[1000001];

void sieve()
{
    for(int i = 1; i <= 1000000; i++)
    {
        P[i] = i;
    }
    for(int i = 2; i <= sqrt(1000000); i++)
    {
        if(P[i] == i)
        {
            for(int j = i * i; j <= 1000000; j += i)
            {
                if(P[j] == j)
                P[j] = i;
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
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cout << P[i] << ' ';
        }
        cout << endl;
    }
} 