#include<bits/stdc++.h>

using namespace std;

struct people 
{
    string name, date, mm, dd, yy;
};

void nhap(people a[], int n) 
{
    cin.ignore();
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i].name;
        cin >> a[i].date;
        stringstream ss(a[i].date);
        getline(ss, a[i].dd, '/');
        getline(ss, a[i].mm, '/');
        getline(ss, a[i].yy, '/');
    }
}

bool cmp(people &a, people &b) 
{
    if (a.yy != b.yy) 
        return a.yy < b.yy;
    if (a.mm != b.mm)
        return a.mm < b.mm;
    return a.dd < b.dd;
}

void sapxep(people a[], int n) 
{
    sort(a, a + n, cmp);
}

void in(people a[], int n) 
{
    cout << a[n - 1].name << endl << a[0].name << endl;
}

int main()
{
    people ds[101];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
    return 0;
}
