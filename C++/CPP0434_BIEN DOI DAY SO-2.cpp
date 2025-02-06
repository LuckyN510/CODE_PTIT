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
        v.push_back(a[0] * a[1]);
        for(int i = 1; i <= n - 2; i++)
        {
            int tmp = a[i - 1] * a[i + 1];
            v.push_back(tmp);
        }
        v.push_back(a[n - 1] * a[n - 2]);
        for(int x : v)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
}