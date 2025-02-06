#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll M;

ll ChiaHet(string &s)
{
    ll mod = 0;
    for(int i = 0; i < s.length(); i++)
    {
        mod = (mod * 10 + s[i] - '0') % M;
    }
    return mod;
}

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; cin >> s >> M;
        cout << ChiaHet(s) << endl;
    }
}