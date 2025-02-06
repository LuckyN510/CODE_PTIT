#include<bits/stdc++.h>

using namespace std;

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
bool increase(int n)
{
    int prev = n % 10;
    n /= 10;
    while(n)
    {
        int current = n % 10;
        if(current >= prev)
        {
            return false;
        }
        prev = current;
        n /= 10;
    }
    return true;
}

bool decrease(int n)
{
    int prev = n % 10;
    n /= 10;
    while(n)
    {
        int current = n % 10;
        if(current <= prev)
        {
            return false;
        }
        prev = current;
        n /= 10;
    }
    return true;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int min = pow(10, n - 1), max = pow(10, n);
        int cnt = 0;
        for(int i = min; i <= max; i++)
        {
            if(increase(i) || decrease(i))
            {
                if(isPrime(i))
                    ++cnt;
            }
        }
        cout << cnt << endl;
    }
}