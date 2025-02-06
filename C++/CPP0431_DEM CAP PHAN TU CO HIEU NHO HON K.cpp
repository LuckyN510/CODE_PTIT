#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long cnt = 0;
        for(int i = 0; i < n; i++)
        {
            int m = upper_bound(a.begin() + i + 1, a.end(), a[i] + k - 1) - (a.begin() + i + 1);
            cnt += m;
        }
        cout << cnt << endl;
    }
}