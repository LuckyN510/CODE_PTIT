#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        sort(s.begin(), s.end());
        string res = "";
        int sum = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                res += s[i];
            }
            else if(isdigit(s[i]))
            {
                sum += s[i] - '0';
            }
        }
        cout << res;
        cout << sum << endl;
    }
}