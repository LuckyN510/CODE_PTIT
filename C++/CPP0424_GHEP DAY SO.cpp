#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k, n; cin >> k >> n;
        int a[n];
        vector<int> v;
        while(k--)
        {
            for(int i = 0; i < n; i++)
            {
                cin >> a[i];
                v.push_back(a[i]);
            }
        }
        sort(v.begin(), v.end());
        for(int x : v)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
}