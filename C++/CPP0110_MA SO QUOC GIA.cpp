#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n = s.length();
        int pos = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
            {
                pos = i;
            }
        }
        s.erase(pos, 3);
        cout << s << endl;
    }
}