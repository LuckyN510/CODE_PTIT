#include<bits/stdc++.h>

using namespace std;

class SinhVien
{
    private:
    string name, className, date;
    double gpa;
    public:
    void nhap();
    void xuat();
};

void SinhVien::nhap()
{
    getline(cin, name);
    getline(cin, className);
    getline(cin, date);
    cin >> gpa;
}

void SinhVien::xuat()
{
    if(date[1] == '/') date.insert(0, "0");
    if(date[4] == '/') date.insert(3, "0");
    cout << "B20DCCN001" << ' ' << name << ' ' << className << ' ' << date << ' ' << fixed << setprecision(2) << gpa;
}

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}