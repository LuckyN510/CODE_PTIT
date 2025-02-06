#include<bits/stdc++.h>

using namespace std;

class SinhVien
{
private:
    string msv, name, className, email;
public:
    friend istream &operator >> (istream &in, SinhVien &a);
    friend ostream &operator << (ostream &out, SinhVien &a);
    bool operator < (SinhVien &other) 
    {
        if(this->className != other.className)
        {
            return this->className < other.className;
        }
        return this->msv < other.msv; 
    }
};

istream &operator >> (istream &in, SinhVien &a)
{
    scanf("\n");
    getline(cin, a.msv);
    getline(cin, a.name);
    getline(cin, a.className);
    getline(cin, a.email);
    return in;
}

ostream &operator << (ostream &out, SinhVien &a)
{
    cout << a.msv << ' ' << a.name << ' ' << a.className << ' ' << a.email << endl;
    return out;
}

int main()
{
    SinhVien ds[1001];
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ds[i];
    }
    sort(ds, ds + n);
    for(int i = 0; i < n; i++)
    {
        cout << ds[i];
    }
}
