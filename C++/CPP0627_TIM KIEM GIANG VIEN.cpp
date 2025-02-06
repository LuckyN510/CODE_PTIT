#include<bits/stdc++.h>

using namespace std;

class GiangVien 
{
private:
    string id, name, mon;
    static int cnt; 
public:
    friend istream &operator >> (istream &in, GiangVien &a);
    friend ostream &operator << (ostream &out, GiangVien &a);
    string getName()
    {
        return name;
    }
};

void Lower(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

int GiangVien::cnt = 0; 

istream &operator >> (istream &in, GiangVien &a) 
{
    ++GiangVien::cnt;
    if(GiangVien::cnt < 10) a.id = "GV0" + to_string(GiangVien::cnt);
    else a.id = "GV" + to_string(GiangVien::cnt);
    scanf("\n"); 
    getline(in, a.name);
    getline(in, a.mon);
    string res = "";
    stringstream ss(a.mon);
    string tmp;
    while(ss >> tmp) 
    {
        res += toupper(tmp[0]);
    }
    a.mon = res;
    return in;
}

ostream &operator << (ostream &out, GiangVien &a) 
{
    out << a.id << " " << a.name << " " << a.mon << endl;
    return out;
}

int main() 
{
    int n; cin >> n;
    GiangVien ds[101];
    for(int i = 0; i < n; i++) 
    {
        cin >> ds[i];
    }
    int q; cin >> q;
    while(q--)
    {
        string s; cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        Lower(s);
        for(int i = 0; i < n; i++)
        {
            string name = ds[i].getName();
            string lowered_name = name;
            Lower(lowered_name);
            if(lowered_name.find(s) != string::npos)
            {
                cout << ds[i];
            }
        }
    }
}
