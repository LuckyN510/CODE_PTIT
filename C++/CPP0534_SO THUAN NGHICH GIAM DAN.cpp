#include<bits/stdc++.h>

using namespace std;

bool check(string &s)
{
    int n = s.length();
    if(n == 1) return false;
    for(int i = 0; i < n / 2; i++)
    {
        if(s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if(a.first.length() > b.first.length()) return true;
    if(a.first.length() < b.first.length()) return false;
    return a.first > b.first;
}

int main()
{
    string s;
    vector<string> v;
    while(cin >> s)
    {
        if(check(s))
        {
            v.push_back(s);
        }
    }
    map<string, int> mp;
    vector<pair<string, int>> v1;
    for(string &x : v)
    {
        mp[x]++;
    }
    for(auto &x : mp)
    {
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end(), cmp);
    for(auto &it : v1)
    {
        cout << it.first << ' ' << it.second << endl;
    }
}
