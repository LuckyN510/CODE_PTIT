#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int cnt = 0;
        int min = m < n ? m : n;
        int max = m > n ? m : n;
        for(int i = min; i <= max; i++)
        {
            if(i % a == 0 || i % b == 0)
            {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}