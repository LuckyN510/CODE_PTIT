#include<bits/stdc++.h>

using namespace std;

class NhanVien
{
    static int cnt;
private:
    string mnv, name, sex, date, add, mst, nkhd;
public:
    friend istream &operator >> (istream &in, NhanVien &a);
    friend ostream &operator << (ostream &out, NhanVien &a);
};

int NhanVien::cnt = 0;

istream &operator >> (istream &in, NhanVien &a)
{
    ++NhanVien::cnt;
    if(NhanVien::cnt < 10) 
        a.mnv = "0000" + to_string(NhanVien::cnt);
    else 
        a.mnv = "000" + to_string(NhanVien::cnt);
    
    scanf("\n");
    getline(in, a.name);
    cin >> a.sex >> a.date;
    in.ignore();  
    getline(in, a.add);
    cin >> a.mst >> a.nkhd;
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
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for(int i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}
