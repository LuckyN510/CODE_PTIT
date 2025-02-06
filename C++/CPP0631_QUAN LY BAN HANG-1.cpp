#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cntkh = 0, cntmh = 0, cnthd = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang 
{
public:
    string mkh, tenKH, sex, bd, add;

public:
    friend class HoaDon;
    friend istream &operator>>(istream &is, KhachHang &a);
    friend ostream &operator<<(ostream &os, const KhachHang &a);
};

istream &operator>>(istream &is, KhachHang &a) 
{
    ++cntkh;
    if (cntkh < 10) 
        a.mkh = "KH00" + to_string(cntkh);
    else 
        a.mkh = "KH0" + to_string(cntkh);
    scanf("\n");
    getline(is, a.tenKH);
    getline(is, a.sex);
    getline(is, a.bd);
    getline(is, a.add);
    KH[a.mkh] = a;
    return is;
}

ostream &operator<<(ostream &os, const KhachHang &a) 
{
    os << a.mkh << " " << a.tenKH << " " << a.sex << " " << a.bd << " " << a.add;
    return os;
}

class MatHang 
{
public:
    string mmh, tenMH, dvt;
    ll giaMua, giaBan;

public:
    friend class HoaDon;
    friend istream &operator>>(istream &is, MatHang &a);
    friend ostream &operator<<(ostream &os, const MatHang &a);
};

istream &operator>>(istream &is, MatHang &a) 
{
    ++cntmh;
    if (cntmh < 10) 
        a.mmh = "MH00" + to_string(cntmh);
    else 
        a.mmh = "MH0" + to_string(cntmh);
    scanf("\n");
    getline(is, a.tenMH);
    getline(is, a.dvt);
    cin >> a.giaMua >> a.giaBan;
    MH[a.mmh] = a;
    return is;
}

ostream &operator<<(ostream &os, const MatHang &a) 
{
    os << a.mmh << " " << a.tenMH << " " << a.dvt << " " << a.giaMua << " " << a.giaBan;
    return os;
}

class HoaDon 
{
public:
    string mhd, mkh, mmh;
    ll sl;

public:
    friend istream &operator>>(istream &is, HoaDon &a);
    friend ostream &operator<<(ostream &os, const HoaDon &a);
};

istream &operator>>(istream &is, HoaDon &a) 
{
    ++cnthd;
    if (cnthd < 10) 
        a.mhd = "HD00" + to_string(cnthd);
    else 
        a.mhd = "HD0" + to_string(cnthd);
    cin >> a.mkh >> a.mmh >> a.sl;
    return is;
}

ostream &operator<<(ostream &os, const HoaDon &a) 
{
    os << a.mhd << ' ' 
       << KH[a.mkh].tenKH << ' ' 
       << KH[a.mkh].add << ' ' 
       << MH[a.mmh].tenMH << ' ' 
       << MH[a.mmh].dvt << ' ' 
       << MH[a.mmh].giaMua << ' ' 
       << MH[a.mmh].giaBan << ' ' 
       << a.sl << ' ' 
       << MH[a.mmh].giaBan * a.sl << endl;
    return os;
}

int main() 
{
    int N, M, K;
    cin >> N;
    KhachHang dskh[25];
    for (int i = 0; i < N; i++) cin >> dskh[i];
    
    cin >> M;
    MatHang dsmh[45];
    for (int i = 0; i < M; i++) cin >> dsmh[i];
    
    cin >> K;
    HoaDon dshd[105];
    for (int i = 0; i < K; i++) cin >> dshd[i];
    
    for (int i = 0; i < K; i++) cout << dshd[i];
    return 0;
}
