#include<bits/stdc++.h>

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
        ToaDo A, B;
        cin >> A.x >> A.y >> B.x >> B.y;
        double kc = sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
        cout << fixed << setprecision(4) << kc << endl;
    }
}