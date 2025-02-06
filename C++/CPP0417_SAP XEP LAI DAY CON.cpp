#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 1], b[n + 1];
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        int pos_first = 0, pos_end = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] != b[i])
            {
                pos_first = i;
                break;
            }
        }
        for(int i = n ; i >= 1; i--)
        {
            if(a[i] != b[i])
            {
                pos_end = i;
                break;
            }
        }
        cout << pos_first << ' ' << pos_end;
        cout << endl;
    }
}