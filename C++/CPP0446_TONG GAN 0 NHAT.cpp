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
        int max_val = -1e9;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(abs(max_val) > abs(a[i] + a[j]))
                {
                    max_val = a[i] + a[j];
                }
            }
        }
        cout << max_val << endl;
    }
}