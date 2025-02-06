#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; cin >>s;
        int k; cin >> k;
        int d[256] = {0};
        int cnt = 0;
        for(char c : s)
        {
            d[c] = 1;
        }
        for(int i = 'a'; i <= 'z'; i++)
        {
            if(d[i] == 0)
            {
                ++cnt;
            }
        }
        if(cnt <= k) cout << "1" << endl;
        else cout << "0" << endl;
    }
}