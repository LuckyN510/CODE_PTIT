#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string msv, name, sex, date, dd, mm, yy, add, mst, signDate;
};

int cnt = 0;

void nhap(NhanVien &ds)
{
    ++cnt;
    cin.ignore();
    if(cnt < 10) ds.msv = "0000" + to_string(cnt);
    else ds.msv = "000" + to_string(cnt);
    getline(cin, ds.name);
    getline(cin, ds.sex);
    getline(cin, ds.date);
    stringstream ss(ds.date);
    getline(ss, ds.mm, '/');
    getline(ss, ds.dd, '/');
    getline(ss, ds.yy, '/');
    getline(cin, ds.add);
    getline(cin, ds.mst);
    cin >> ds.signDate;
}

bool cmp(NhanVien &a, NhanVien &b)
{
    if (a.yy != b.yy)
        return a.yy < b.yy;
    if (a.mm != b.mm)
        return a.mm < b.mm;
    return a.dd < b.dd;
}

void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

void inds(NhanVien ds[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].sex << ' ' << ds[i].date << ' ' << ds[i].add << ' ' << ds[i].mst << ' ' << ds[i].signDate << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
