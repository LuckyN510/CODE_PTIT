#include<bits/stdc++.h>

using namespace std;

void ChuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
vector<string> v;

class SinhVien
{
private:
    string name, className, date;
    double gpa;
public:
    friend istream &operator >> (istream &in, SinhVien &x)
    {
        getline(in, x.name);
        cin >> x.className >> x.date >> x.gpa;
        if(x.date[1] == '/') x.date.insert(0, "0");
        if(x.date[4] == '/') x.date.insert(3, "0");
        stringstream ss(x.name);
        string tmp;
        while(ss >> tmp)
        {
            ChuanHoa(tmp);
            v.push_back(tmp);
        }
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien &x)
    {
        out << "B20DCCN001" << ' ';
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << ' ';
        }
        out << x.className << ' ' << x.date << ' ' << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}