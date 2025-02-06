#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll solve(string s, int q, int p)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == q)
        {
            s[i] = p;
        }
    }
    return stoll(s);
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << solve(s1, '6', '5') + solve(s2, '6', '5') << ' ';
        cout << solve(s1, '5', '6') + solve(s2, '5', '6') << endl;
       
    }
}