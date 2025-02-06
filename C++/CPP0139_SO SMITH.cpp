#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int digitSum(int n)
{
    int tong_cs = 0;
    while (n)
    {
        tong_cs += n % 10;
        n /= 10;
    }
    return tong_cs;
}

int primeFactorSum(int n)
{
    int tong_uoc = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                n /= i;
                ++cnt;
            }
            tong_uoc += digitSum(i) * cnt;   
        }
    }
    if (n > 1)
    {
        tong_uoc += digitSum(n) ;
    }
    return tong_uoc;
}

bool check(int n)
{
    return digitSum(n) == primeFactorSum(n);
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if (!isPrime(n) && check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
