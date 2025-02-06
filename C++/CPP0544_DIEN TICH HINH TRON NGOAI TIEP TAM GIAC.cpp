#include<bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

struct ToaDo
{
    double x, y;
};

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ToaDo A, B, C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        double AB = sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
        double BC = sqrt((B.x - C.x)*(B.x - C.x) + (B.y - C.y)*(B.y - C.y));
        double CA = sqrt((C.x - A.x)*(C.x - A.x) + (C.y - A.y)*(C.y - A.y));

        if(AB + CA > BC && AB + BC > CA && BC + CA > AB)
        {
            double p = (AB + BC + CA) / 2;
            double S = sqrt(p*(p - AB)*(p - BC)*(p - CA));
            double R = (AB * BC * CA) / (4 * S); 
            cout << fixed << setprecision(3) << PI * R * R << endl;
        }
        else
        {
            cout << "INVALID" << endl;
        }
    }
}
