#include<bits/stdc++.h>

using namespace std;

class NhanVien
{
    static int cnt;
private:
    string mnv, name, sex, date, add, mst, nkhd;
    string dd, mm, yy;
public:
    friend istream &operator >> (istream &in, NhanVien &a);
    friend ostream &operator << (ostream &out, NhanVien &a);
    bool operator < (NhanVien other)
    {
        if(this->yy != other.yy)
        {
            return this->yy < other.yy;
        }
        if(this->mm != other.mm)
        {
            return this->mm < other.mm;
        }
        return this->dd < other.dd;
    }
};

void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N);
}

int NhanVien::cnt = 0;

istream &operator >> (istream &in, NhanVien &a)
{
    ++NhanVien::cnt;
    if(NhanVien::cnt < 10) a.mnv = "0000" + to_string(NhanVien::cnt);
    else a.mnv = "000" + to_string(NhanVien::cnt);
    scanf("\n");
    getline(in, a.name);
    getline(in, a.sex);
    getline(in, a.date);
    getline(in, a.add);
    getline(in, a.mst);
    getline(in, a.nkhd);
    stringstream ss(a.date);
    getline(ss, a.mm, '/');
    getline(ss, a.dd, '/');
    getline(ss, a.yy);
    return in;
}

ostream &operator << (ostream &out, NhanVien &a)
{
    out << a.mnv << ' ' << a.name << ' ' << a.sex << ' ' << a.date << ' ' << a.add << ' ' << a.mst << ' ' << a.nkhd << endl;
    return out;
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> ds[i];
    sapxep(ds, N);
    for(i = 0; i < N; i++) cout << ds[i];
    return 0;
}
