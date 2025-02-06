#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int minval = a < b ? a : b;
        int maxval = a > b ? a : b;
        for(int i = minval; i <= maxval; i++)
        {
            if(isPrime(i))
            {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
}