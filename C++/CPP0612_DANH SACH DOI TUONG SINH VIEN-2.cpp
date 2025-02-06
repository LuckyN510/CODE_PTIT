#include<bits/stdc++.h>

using namespace std;

void Lower(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

int cnt = 0;

class SinhVien
{
private:
    string msv, name, className, date;
    double gpa;
public:
    friend istream &operator >> (istream &in, SinhVien &a)
    {
        ++cnt;
        cin.ignore();
        string s;
        getline(in, s);
        stringstream ss(s);
        while(ss >> s)
        {
            Lower(s);
            a.name += s + " ";
        }
        a.name.erase(a.name.end() - 1);
        in >> a.className >> a.date >> a.gpa;
        if(cnt < 10) a.msv = "B20DCCN00" + to_string(cnt);
        else a.msv = "B20DCCN0" + to_string(cnt);
        if(a.date[1] == '/') a.date.insert(0, "0");
        if(a.date[4] == '/') a.date.insert(3, "0");
      
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien &a)
    {
        out << a.msv << ' ' << a.name << ' ' << a.className << ' ' << a.date << ' ' << fixed << setprecision(2) << a.gpa << endl;
        return out;
    } 
};
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for(int i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}