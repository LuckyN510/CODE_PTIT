#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n = s.length() - 1;
        if(s[n] == '6' && s[n - 1] == '8') 
        {
            cout << "1" << endl;
        }
        else cout << "0" << endl;
    }
}