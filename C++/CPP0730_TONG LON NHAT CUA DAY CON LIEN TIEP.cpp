#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        ll max_sum = LLONG_MIN, sum = 0;
        for (int i = 0; i < n; i++) 
        {
            sum += a[i];
            max_sum = max(max_sum, sum);
            if (sum < 0) sum = 0;
        }
        cout << max_sum << endl;
    }
}
