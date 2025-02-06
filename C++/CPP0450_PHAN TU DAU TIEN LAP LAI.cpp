#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        vector<int> mark(1000001, 0); 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int check = -1;
        for (int i = 0; i < n; i++)
        {
            if (mark[a[i]] == 1)
            {
                check = a[i];
                break;
            }
            mark[a[i]] = 1;
        }
        cout << check << endl;
    }
}
