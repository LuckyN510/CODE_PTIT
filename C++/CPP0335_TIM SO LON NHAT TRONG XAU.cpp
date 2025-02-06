#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        string res = "";
        vector<string> v;
        for(int i = 0; i < s.length(); i++)
        {
            if(isdigit(s[i]))
            {
                res += s[i];
            }
            else
            {
                if(!res.empty())
                {
                    v.push_back(res);
                    res = "";
                }
            }
        }
        if(!res.empty())
        {
            v.push_back(res);
        }
        int max_val = -1e9;
        for(string it : v)
        {
            max_val = max(max_val, stoi(it));
        }
        cout << max_val << endl;
    }
}