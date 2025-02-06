#include<bits/stdc++.h>

using namespace std;

#define maxn 1000001

int P[maxn];

void sieve()
{
    for(int i = 1; i <= maxn; i++)
    {
        P[i] = i;
    }
    for(int i = 2; i * i <= maxn; i++)
    {
        if(P[i] == i)
        {
            for(int j = i * i; j <= maxn; j += i)
            {
                if(P[j] == j)
                {
                    P[j] = i; 
                }
            }
        }
    }
}

int main()
{
    sieve();
    int t; 
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cout << P[i] << " ";
        }
        cout << endl;
    }
}
