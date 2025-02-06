#include <bits/stdc++.h>

using namespace std;

struct NhanVien
{
    string name, sex, date, address, mst, nkhd, stt;
};

int cnt = 0;

void nhap(NhanVien &a)
{
    ++cnt;
    if(cnt == 1) cin.ignore();
    getline(cin, a.name);  
    getline(cin, a.sex); 
    getline(cin, a.date); 
    getline(cin, a.address); 
    getline(cin, a.mst); 
    getline(cin, a.nkhd); 
    if(cnt < 10) a.stt = "0000" + to_string(cnt);
    else a.stt = "000" + to_string(cnt);
}

void inds(NhanVien a[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i].stt << " " << a[i].name << " " << a[i].sex << " " << a[i].date << " "
         << a[i].address << " " << a[i].mst << " " << a[i].nkhd << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        nhap(ds[i]);
    }
    inds(ds, N);
    return 0;
}