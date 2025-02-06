#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int d[100005] = {0};
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        d[a[i]]++;
        }
        ll cnt = 0;
        for(int i = 0; i <= 100000; i++)
        {
            if(d[i] > 1)
            {
                cnt += d[i];
            }
        }
        cout << cnt << endl;
    }
}



