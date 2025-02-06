#include <bits/stdc++.h>

using namespace std;

class GiangVien 
{
private:
    string stt, name, lastName, subject;
public:
    friend istream &operator >> (istream &in, GiangVien &a);
    friend ostream &operator << (ostream &out,GiangVien &a); 
    bool operator < (GiangVien &other)
    { 
        if (this->lastName != other.lastName) 
        {
            return this->lastName < other.lastName;
        }
        return this->stt < other.stt;
    }
};

void Upper(string &s) 
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
}

int cnt = 0;

istream &operator >> (istream &in, GiangVien &a) 
{
    ++cnt;
    if(cnt < 10) a.stt = "GV0" + to_string(cnt);
    else a.stt = "GV" + to_string(cnt);
    scanf("\n");
    getline(in, a.name);
    string s1;
    stringstream ss(a.name);
    vector<string> v;
    while(ss >> s1)
    {
        v.push_back(s1);
    }
    a.lastName = v[v.size() - 1];
    getline(in, a.subject);
    string s2;
    stringstream ss2(a.subject);
    string res = "";
    while(ss2 >> s2)
    {
        Upper(s2);
        res += s2[0];
    }
    a.subject = res;
    return in;
}

ostream &operator << (ostream &out, GiangVien &a) 
{ 
    out << a.stt << ' ' << a.name << ' ' << a.subject << endl;
    return out;
}

int main() 
{
    int n;
    cin >> n;
    GiangVien ds[100];
    for (int i = 0; i < n; i++) 
    {
        cin >> ds[i];
    }
    sort(ds, ds + n);
    for (int i = 0; i < n; i++) 
    {
        cout << ds[i];
    }
    return 0;
}
