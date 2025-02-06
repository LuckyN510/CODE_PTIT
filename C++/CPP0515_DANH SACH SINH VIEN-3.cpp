#include <bits/stdc++.h>
using namespace std;

void ChuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    } 
}

struct SinhVien
{
    string name, msv, date, className;
    float gpa;
};

vector<string> formatName(string name)
{
    stringstream ss(name);
    string tmp;
    vector<string> v;
    while(ss >> tmp)
    {
        ChuanHoa(tmp);
        v.push_back(tmp);
    }
    return v;
}

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
        ++cnt;
        if(cnt < 10) a[i].msv = "B20DCCN00" + to_string(cnt);
        else a[i].msv = "B20DCCN0" + to_string(cnt);

        if(a[i].date[1] == '/') a[i].date.insert(0, "0");
        if(a[i].date[4] == '/') a[i].date.insert(3, "0");  
    }
}

bool cmp(SinhVien &a, SinhVien &b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien a[],int N)
{
    sort(a, a + N, cmp);
}

void in(SinhVien a[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i].msv << ' ';
        for(string x : formatName(a[i].name))
        {
            cout << x << ' ';
        }
        cout << a[i].className << ' '
             << a[i].date << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main()
{
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
