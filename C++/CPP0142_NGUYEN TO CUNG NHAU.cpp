#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

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
        int n; cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            if(gcd(n, i) == 1)
            {
                ++cnt;
            }
        }
        if(isPrime(cnt)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}