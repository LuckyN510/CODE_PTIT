#include<bits/stdc++.h>

using namespace std;

set<int> se;

void solve(int n)
{
    int r = 0;
    while(n)
    {
        se.insert(n % 10);
        n /= 10;
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        se.clear();
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            solve(a[i]);
        }
        for(int x : se)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
}