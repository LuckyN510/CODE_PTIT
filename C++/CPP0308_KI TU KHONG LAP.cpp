#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; cin >> s;
        int d[256] = {};
        string res = "";
        for(char x : s)
        {
            d[x]++;
        }
        for(char x : s)
        {
            if(d[x] == 1)
            {
                cout << x;
            }
        }
        cout << endl;
    }
}