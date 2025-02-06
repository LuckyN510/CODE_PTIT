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
        vector<int> v;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == a[i + 1])
            {
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] != 0)
                v.push_back(a[i]);
            else
                ++cnt;
        }
        for(int x : v)
        {
            cout << x << ' ';
        }
        while(cnt--) cout << "0 ";
        cout << endl;
    }
}