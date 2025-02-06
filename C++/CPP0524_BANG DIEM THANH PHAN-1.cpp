#include<bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string msv, name, className, stt;
    double point1, point2, point3;
};

int cnt = 0;

void nhap(SinhVien &a)
{
    cin >> a.msv;
    cin.ignore();
    getline(cin, a.name);    
    cin >> a.className >> a.point1 >> a.point2 >> a.point3;
}

bool cmp(SinhVien &a, SinhVien &b)
{
    return a.msv < b.msv;
}

void sap_xep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        ++cnt;
        ds[i].stt = to_string(cnt);
        cout << ds[i].stt << ' ' << ds[i].msv << ' ' << ds[i].name << ' ' <<
         ds[i].className << ' ' << fixed << setprecision(1) << ds[i].point1 << ' ' << ds[i].point2 << ' ' << ds[i].point3 << endl;
    }
}
int main()
{
    int n; 
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}