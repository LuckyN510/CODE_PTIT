#include<bits/stdc++.h>

using namespace std;

bool check(string &s)
{
    int sum = 0;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    if(sum % 3 == 1) return 1;
    else return 0;
    int num = (s[n - 2] - '0') * 10 + s[n - 1] - '0';
    if((s[n - 3] - '0') % 2 == 0 && num % 8 == 0)
    {
        return 1;
    }
    else if((s[n - 3] - '0') % 2 == 0 && (num + 4) % 8 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(check(s)) 

    }
}