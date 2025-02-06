#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, X; cin >> n >> X;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        int pos = 0;
        bool find = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] == X)
            {
                pos = i;
                find = 1;
                break;
            }
        }
        if(find) cout << pos << endl;
        else cout << "-1" << endl;
        
    }
}