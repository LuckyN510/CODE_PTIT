#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    while (b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

class PhanSo
{
private:
    ll tu, mau;

public:
    PhanSo(ll tu, ll mau) 
    {
        this -> tu;
        this -> mau;
    }
    friend istream &operator>>(istream &in, PhanSo &x)
    {
        in >> x.tu >> x.mau;
        return in;
    }
    void rutgon()
    {
        ll GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }
    friend ostream &operator<<(ostream &out, PhanSo &x)
    {
        out << x.tu << "/" << x.mau;
        return out;
    }
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}
