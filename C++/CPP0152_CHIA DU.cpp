#include<bits/stdc++.h>

using namespace std;

int m;

int mulNumber(int a, int b)
{
    if(b == 0) return 0;
    int ans = mulNumber(a, b / 2);
    ans = (ans + ans) % m;
    if(b % 2 == 1) ans = (ans + a) % m;
	return ans;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a; cin >> a >> m;
        bool found = false;
        for(int i = 0; i < m; i++)
        {
            if(mulNumber(a, i) == 1)
            {
                cout << i << endl;
                found = true;
                break;
            }
        }
        if(!found)
            cout << -1 << endl; 
    }
}
