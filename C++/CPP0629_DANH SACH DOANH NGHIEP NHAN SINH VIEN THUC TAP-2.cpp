#include<bits/stdc++.h>

using namespace std;

class ThucTap
{
    private:
        string company, nameCompany;
        int quantity;
    public:
        friend istream &operator >> (istream &in, ThucTap &a);
        friend ostream &operator << (ostream &out, ThucTap &a);
        bool operator < (ThucTap &other)
        {
            if(this->quantity != other.quantity)
            {
                return this->quantity > other.quantity;  
            }   
            return this->company < other.company;
        }
        int getQuantity()
        {
            return quantity;
        }
};

istream &operator >> (istream &in, ThucTap &a)
{
    scanf("\n");
    getline(in, a.company);
    getline(in, a.nameCompany);
    cin >> a.quantity;
    return in;
}

ostream &operator << (ostream &out, ThucTap &a)
{
    out << a.company << ' ' << a.nameCompany << ' ' << a.quantity << endl;
    return out;
}

int main()
{
    int n; cin >> n;
    ThucTap ds[1001];
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cin >> ds[i];
    }
    sort(ds, ds + n);   
    int q; cin >> q;
    while(q--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for(int i = 0; i < n; i++)
        {
            if(ds[i].getQuantity() >= a && ds[i].getQuantity() <= b)
            {
                cout << ds[i];
            }
        }
        cout << endl;
    }
}