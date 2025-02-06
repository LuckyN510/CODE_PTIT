#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++) 
        {
            int num;
            cin >> num;
            v.push_back({num, abs(x - num)});
        }
        stable_sort(v.begin(), v.end(), cmp);
        for(auto it : v)
        {
            cout << it.first << ' ';
        }
        cout << endl;
    }
}
