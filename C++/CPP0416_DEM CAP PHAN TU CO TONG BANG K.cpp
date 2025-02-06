#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= 0)
            {
                for(int j = i + 1; j < n; j++)
                {
                    if(a[j] == k - a[i])
                        ++cnt;
                }
            }
        }
        cout << cnt << endl;
    }
}