#include<bits/stdc++.h>

using namespace std;

struct ToaDo
{
    double x, y, z;
};

void nhap(ToaDo &A) 
{
    cin >> A.x >> A.y >> A.z;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ToaDo A, B, C, D;
        nhap(A); nhap(B); nhap(C); nhap(D);
        // vector AD
        double x1 = D.x - A.x, y1 = D.y - A.y, z1 = D.z - A.z;
        // vector AC
        double x2 = C.x - A.x, y2 = C.y - A.y, z2 = C.z - A.z;
        // vector AB
        double x3 = B.x - A.x, y3 = B.y - A.y, z3 = B.z - A.z;
        // Tính định thức
        double det = x1 * (y2 * z3 - y3 * z2) - y1 * (x2 * z3 - x3 * z2) + z1 * (x2 * y3 - x3 * y2);
        if(abs(det) < 1e-9)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}
