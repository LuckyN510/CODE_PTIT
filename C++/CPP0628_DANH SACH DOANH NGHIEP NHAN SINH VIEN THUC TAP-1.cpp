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
    for(int i = 0; i < n; i++)
    {
        cout << ds[i];
    }
}