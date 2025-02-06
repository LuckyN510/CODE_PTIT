#include<bits/stdc++.h>

using namespace std;

struct ThucTap
{
    string stt, msv, name, className, email, company; 
};

int cnt = 0;

void nhap(ThucTap a[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        ++cnt;
        a[i].stt = to_string(cnt);  
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].className);
        getline(cin, a[i].email);
        getline(cin, a[i].company);
    }
}

bool cmp(ThucTap &a, ThucTap &b)
{
    return a.name < b.name;
}

void sapxep(ThucTap ds[], int n)
{
    sort(ds, ds + n, cmp);
}

void in(ThucTap a[], int n, const string &s) 
{
    for(int i = 0; i < n; i++)
    {
        if(a[i].company == s)
        {
           cout << a[i].stt << ' ' << a[i].msv << ' ' << a[i].name << ' ' << a[i].className << ' ' << a[i].email << ' ' << a[i].company << endl;
        }
    }
}

int main()
{
    ThucTap ds[100];
    int n; 
    cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    int q; 
    cin >> q;
    cin.ignore();
    while(q--)
    {
        string s; 
        getline(cin, s); 
        in(ds, n, s);
    }
}
