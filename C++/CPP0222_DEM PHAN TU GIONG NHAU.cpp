#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        int a[n + 1][n + 1];
        map<int, int> mp;
        for (int i = 1; i <= n; i++) 
        {
            set<int> se;
            for (int j = 1; j <= n; j++) 
            {
                cin >> a[i][j];
                se.insert(a[i][j]);
            }
            for (int x : se)
            {
                mp[x]++;
            }
        }
        int cnt = 0;
        for(pair<int, int> it : mp)
        {
            if(it.second == n)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
