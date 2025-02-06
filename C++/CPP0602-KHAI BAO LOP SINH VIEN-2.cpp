#include<bits/stdc++.h>

using namespace std;

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
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien &x)
    {
        out << "B20DCCN001" << ' ' << x.name << ' ' << x.className << ' ' << x.date << ' ' << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}