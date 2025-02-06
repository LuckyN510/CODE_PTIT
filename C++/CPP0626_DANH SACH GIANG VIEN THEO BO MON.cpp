#include <bits/stdc++.h>

using namespace std;

class GiangVien 
{
private:
    string stt, name, lastName, subject;
public:
    friend istream &operator >> (istream &in, GiangVien &a);
    friend ostream &operator << (ostream &out,  GiangVien &a); 
    string getSubject()
    {
        return subject;
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
    a.lastName = v.back(); 
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

string solve(string &s)
{
    Upper(s);
    string word;
    stringstream ss(s);
    string ans = "";
    while(ss >> word)
    {
        ans += word[0];
    }
    return ans;
}

int main() 
{
    int n; cin >> n;
    GiangVien ds[100];
    for (int i = 0; i < n; i++) 
    {
        cin >> ds[i];
    }
    int q; cin >> q;
    cin.ignore(); 
    while(q--)
    {
        string s; 
        getline(cin, s);
        string major = solve(s);
        cout << "DANH SACH GIANG VIEN BO MON " << major << ":" << endl;
        for(int i = 0; i < n; i++)
        {
            if(ds[i].getSubject() == major)
            {
                cout << ds[i];
            }
        }
    }
    return 0;
}
