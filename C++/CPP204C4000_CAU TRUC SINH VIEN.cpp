#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string name, msv;
    string className;
    string date;
    double gpa;
};

void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.name); 
    a.msv = "N20DCCN001";
    cin >> a.className >> a.date >> a.gpa;
    if(a.date[1] == '/') a.date.insert(0, "0");
    if(a.date[4] == '/') a.date.insert(3, "0");
}

void inThongTinSV(SinhVien &a)
{
    cout << a.msv << " " << a.name << " " << a.className << " " 
         << a.date << " " << fixed << setprecision(2) << a.gpa;
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
