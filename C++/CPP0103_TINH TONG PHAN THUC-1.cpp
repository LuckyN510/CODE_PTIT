#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sum +=  (double) 1 / i;
    }
    cout << fixed << setprecision(4) << sum;
}