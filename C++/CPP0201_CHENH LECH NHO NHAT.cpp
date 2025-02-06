#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int min_val = 1e9;
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            min_val = min(min_val, abs(a[i + 1] - a[i]));  
        }
        cout << min_val << endl;
    }
}