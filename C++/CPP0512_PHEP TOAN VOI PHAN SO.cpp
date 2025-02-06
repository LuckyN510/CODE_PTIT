#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a * (b / gcd(a, b));
}

struct PhanSo
{
    ll tu, mau;
};

void in(PhanSo &M)
{
    cout << M.tu << "/" << M.mau;
}

void rutgon(PhanSo &M)
{
    int UCLN = gcd(M.tu, M.mau);
    M.tu /= UCLN;
    M.mau /= UCLN;
}

PhanSo Mul(PhanSo &A, PhanSo &B)
{
    PhanSo res;
    res.tu = A.tu * B.tu;
    res.mau = A.mau * B.mau;
    rutgon(res);
    return res;
}

PhanSo powSum(PhanSo &A, PhanSo &B)
{
    ll BCNN = lcm(A.mau, B.mau);
    PhanSo res;
    res.mau = BCNN;
    res.tu = (BCNN / A.mau) * A.tu + (BCNN / B.mau) * B.tu;
    rutgon(res); 
    PhanSo ans = Mul(res, res);
    return ans;
}


void process(PhanSo &A, PhanSo &B)
{
    PhanSo C = powSum(A, B);
    PhanSo K = Mul(A, B); PhanSo D = Mul(K, C);
    in(C);
    cout << ' ';
    in(D);
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}
