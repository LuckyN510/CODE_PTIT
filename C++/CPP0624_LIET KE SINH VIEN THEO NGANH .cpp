#include <bits/stdc++.h>

using namespace std;

class SinhVien 
{
public:
    string msv, name, className, email;

    friend istream &operator >> (istream &in, SinhVien &a) 
    {
        scanf("\n");
        getline(in, a.msv);
        getline(in, a.name);
        getline(in, a.className);
        getline(in, a.email);
        return in;
    }

    friend ostream &operator << (ostream &out, const SinhVien &a) 
    {
        out << a.msv << ' ' << a.name << ' ' << a.className << ' ' << a.email << endl;
        return out;
    }
};

string tenNganh(const string &s) 
{
    if(s == "Ke toan") return "KT";
    if(s == "Cong nghe thong tin") return "CN";
    if(s == "An toan thong tin") return "AT";
    if(s == "Vien thong") return "VT";
    if(s == "Dien tu") return "DT";
    return ""; 
}

int main() {
    SinhVien ds[1001];
    int n; cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> ds[i];
    }
    int q; cin >> q;
    while(q--) 
    {
        scanf("\n");
        string s;
        getline(cin, s);
        string major = tenNganh(s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for(int i = 0; i < n; i++) 
        {
            if (major == "CN" || major == "AT") 
            {
                if (ds[i].msv[5] == major[0] && ds[i].msv[6] == major[1] && ds[i].className[0] != 'E') 
                {
                    cout << ds[i];
                }
            } 
            else 
            {
                if (ds[i].msv[5] == major[0] && ds[i].msv[6] == major[1]) 
                {
                    cout << ds[i];
                }
            }
        }
    }

    return 0;
}
