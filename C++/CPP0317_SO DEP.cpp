#include<bits/stdc++.h>

using namespace std;

bool check(string &s)
{
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        if(s[i] != s[n - i - 1])
        {
            return 0;
        }
        if(s[i] % 2 != 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}