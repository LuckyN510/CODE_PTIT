#include <bits/stdc++.h>

using namespace std;

struct NhanVien
{
    string name, sex, date, address, mst, nkhd;
};

void nhap(NhanVien &a)
{
    getline(cin, a.name);  
    cin >> a.sex >> a.date;
    cin.ignore();  
    getline(cin, a.address);
    cin >> a.mst >> a.nkhd;
}

void in(NhanVien &a)
{
    cout << "00001" << " " << a.name << " " << a.sex << " " << a.date << " "
         << a.address << " " << a.mst << " " << a.nkhd << endl;
}

int main()
{
    NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
