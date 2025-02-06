#include <bits/stdc++.h>

using namespace std;

bool ChiaHet(string &s)
{
    int mod = 0;
    for(int i = 0; i < s.length(); i++)
    {
        mod = (mod * 2 + s[i] - '0') % 5;
    }
    return mod == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (ChiaHet(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
