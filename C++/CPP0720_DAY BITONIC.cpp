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
        vector<int> L(n, 1), R(n, 1);
        for (int i = 1; i < n; i++) 
        {
            for (int j = 0; j < i; j++) 
            {
                if (a[i] > a[j] && L[i] < L[j] + 1) 
                {
                    L[i] = L[j] + 1;
                }
            }
        }
        for (int i = n - 2; i >= 0; i--) 
        {
            for (int j = n - 1; j > i; j--)
            {
                if (a[i] > a[j] && R[i] < R[j] + 1)
                {
                    R[i] = R[j] + 1;
                }
            }
        }
        int res = L[0] + R[0] - 1;
        for(int i = 1; i < n; i++)
        {
            res = max(res, L[i] + R[i] - 1);
        }
        cout << res << endl;   
    }
}
