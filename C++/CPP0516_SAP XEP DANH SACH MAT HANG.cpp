#include <bits/stdc++.h>

using namespace std;

struct hangHoa
{
    double giaMua, giaBan;
    string ten, nhom, stt;
    double profit;
};

int cnt = 0;

void nhap(hangHoa ds[], int n)
{
    cin.ignore(); 
    for(int i = 0; i < n; i++)
    {
        ++cnt;
        ds[i].stt = to_string(cnt);
        getline(cin, ds[i].ten);
        getline(cin, ds[i].nhom);
        cin >> ds[i].giaMua >> ds[i].giaBan;
        cin.ignore();
        ds[i].profit = ds[i].giaBan - ds[i].giaMua;
    }
}

bool cmp(hangHoa a, hangHoa b)
{
    return a.profit > b.profit;
}

void sapxep(hangHoa ds[], int n)
{
    sort(ds, ds + n, cmp);
}

void in(hangHoa ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << ds[i].stt << ' ' << ds[i].ten << ' ' << ds[i].nhom << ' ' << fixed << setprecision(2) << ds[i].profit << endl;
    }
}

int main()
{
    hangHoa ds[50];
    int n; 
    cin >> n;
    nhap(ds, n);
    sapxep(ds, n); 
    in(ds, n);
    return 0;
}
