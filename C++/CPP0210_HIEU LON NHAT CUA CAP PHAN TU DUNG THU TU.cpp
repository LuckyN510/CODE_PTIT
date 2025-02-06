#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        int max_val = -1e9;
        bool find = 0;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[i] < a[j])
                {
                    max_val = max(max_val, a[j] - a[i]);
                    find = 1;
                }
            }
        }
        if(find) cout << max_val << endl;
        else cout << "-1" << endl;
    }
}
