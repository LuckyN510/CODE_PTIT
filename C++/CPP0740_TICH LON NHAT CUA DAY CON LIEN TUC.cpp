#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        ll max_product = LLONG_MIN;
        for(int i = 0; i < n; i++)
        {
            ll tmp = a[i];  
            max_product = max(max_product, tmp); 
            for(int j = i + 1; j < n; j++)
            {
                tmp *= a[j];
                max_product = max(max_product, tmp);
            }
        }
        cout << max_product << endl;
    }
}
