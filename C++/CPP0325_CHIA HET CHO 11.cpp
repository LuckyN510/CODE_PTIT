#include <bits/stdc++.h>

using namespace std;

bool ChiaHet(string &s)
{
    int mod = 0;
    for(int i = 0; i < s.length(); i++)
    {
        mod = (mod * 10 + s[i] - '0') % 11;
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
        if (ChiaHet(s)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}
