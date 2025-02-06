#include<bits/stdc++.h>

using namespace std;

class NhanVien
{
private:
    string mnv, name, sex, date, add, mst, nkhd;
public:
    friend istream &operator >> (istream &in, NhanVien &a)
    {
        getline(in, a.name);
        getline(in, a.sex);
        getline(in, a.date);
        getline(in, a.add);
        getline(in, a.mst);
        getline(in, a.nkhd);
        return in;
    }
    friend ostream &operator >> (ostream &out, NhanVien &a)
    {
        out << "00001" << ' ' << a.name << ' ' << a.sex << ' ' << a.date << ' ' << a.add << ' ' << a.mst << ' ' << a.nkhd << endl;
        return out; 
    }
        
};
int main()
{
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}