#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

void in(PhanSo &p)
{
    cout << p.tu << "/" << p.mau;
}

void rutgon(PhanSo &p)
{
    ll UCLN = gcd(p.tu, p.mau);
    p.tu /= UCLN;
    p.mau /= UCLN;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
