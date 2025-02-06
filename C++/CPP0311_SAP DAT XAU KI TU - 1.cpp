#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; cin >> s;
        int n = s.length();
        int d[256] = {0};
        int max_fre = 0;
        for(char c : s)
        {
            d[c]++;
            max_fre = max(max_fre, d[c]);
        }
        if(max_fre <= (n - 1) / 2 + 1) cout << "1" << endl;
        else cout << "0" << endl;
    }
}