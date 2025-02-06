#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        int d[100001] = {0};
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            d[a[i]]++;
        }
        bool found = false;
        for (int i = 0; i < n; i++) 
        {
            if (k == a[i])
            {
                cout << d[k] << endl; 
                found = true;
                break;
            }
        }
        if (!found) 
            cout << "-1" << endl; 
    }
}
