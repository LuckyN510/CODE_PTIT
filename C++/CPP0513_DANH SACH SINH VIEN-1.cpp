#include<bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string name, msv, date, className;
    float gpa;
};

int cnt = 0;

void nhap(SinhVien a[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cin.ignore(); 
        getline(cin, a[i].name);
        getline(cin, a[i].className);
        getline(cin, a[i].date);
        cin >> a[i].gpa;
    }
}

void in(SinhVien a[], int N)
{
    for(int i = 0; i < N; i++)
    {
        ++cnt;
        if(cnt < 10) a[i].msv = "B20DCCN00" + to_string(cnt);
        else a[i].msv = "B20DCCN0" + to_string(cnt);
        if(a[i].date[1] == '/') a[i].date.insert(0, "0");
        if(a[i].date[4] == '/') a[i].date.insert(3, "0");
        cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].className << ' '
             << a[i].date << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
