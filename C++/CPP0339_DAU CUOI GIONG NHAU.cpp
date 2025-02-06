#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int b[26] = {0};
        for(int i = 0; i < s.length(); i++)
        {
            b[s[i] - 'a']++;
        }
        long long cnt = s.length();
        for(int i = 0; i < 26; i++)
        {
            cnt += b[i]*(b[i] - 1) / 2;
        }
        cout << cnt << endl;
    }
}