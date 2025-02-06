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
        sort(a, a + n);
        int d[100005] = {};
        for(int i = 0; i < n; i++)
        {
            if(a[i] > 0)
                d[a[i]]++;
        }
        for(int i = 1; i < 1000001; i++)
        {
            if(d[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}