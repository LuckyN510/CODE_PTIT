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

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

class PhanSo
{
private:
    ll tu, mau; 
public:
    PhanSo(ll tu, ll mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    void rutgon()
    {
        ll UCLN = gcd(tu, mau);
        tu /= UCLN;
        mau /= UCLN;
    }
    PhanSo operator + (PhanSo &a)
    {
        ll BCNN = lcm(this->mau, a.mau);
        ll newMau = BCNN;
        ll newTu = (BCNN / this->mau) * this->tu + (BCNN / a.mau) * a.tu;
        PhanSo res(newTu, newMau);
        res.rutgon();
        return res;
    }
    friend istream &operator >> (istream &in, PhanSo &a)
    {
        in >> a.tu >> a.mau;
        return in;
    }
    friend ostream &operator << (ostream &out, const PhanSo &a) 
    {
        out << a.tu << "/" << a.mau;
        return out;
    }
};

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0; 
}
