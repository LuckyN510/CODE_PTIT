#include<bits/stdc++.h>

using namespace std;

string d101 = "ABBADCCABDCCABD";
string d102 = "ACCABCDDBBCDDBB";

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int cnt = 0;
        char s;
        if(n == 101)
        {
            for(int i = 0; i < 15; i++)
            {
                cin >> s;
                if(s == d101[i]) ++cnt;
            }
        }
        else if(n == 102)
        {
            for(int i = 0; i < 15; i++)
            {
                cin >> s;
                if(s == d102[i]) ++cnt;
            }
        }
        cout << fixed << setprecision(2) <<  10.0 / 15 * cnt << endl;
    }
}