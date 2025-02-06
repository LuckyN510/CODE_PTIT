#include<bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string name;
    string MSV;
    string date;
    float gpa;
};

void nhap(SinhVien &a)
{
    getline(cin, a.name);
    getline(cin, a.MSV);
    getline(cin, a.date);
    cin >> a.gpa;
}

void in(SinhVien &a)
{
    if(a.date[1] == '/')
    {
        a.date.insert(0, "0");
    }
    if(a.date[4] == '/')
    {
        a.date.insert(3, "0");
    }
    cout << "B20DCCN001" << " " << a.name << " " << a.MSV << " " 
    << a.date << " " << fixed << setprecision(2) << a.gpa;
}

int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}