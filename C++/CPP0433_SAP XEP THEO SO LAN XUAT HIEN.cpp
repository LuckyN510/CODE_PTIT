#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) 
        return a.second > b.second;  
        return a.first < b.first;    
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        vector<pair<int, int>> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto x : mp) 
        {
            v.push_back({x.first, x.second});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto it : v)
        {
            for (int j = 0; j < it.second; j++)
            {
                cout << it.first << ' ';
            }       
        }
        cout << endl;
    }
}
