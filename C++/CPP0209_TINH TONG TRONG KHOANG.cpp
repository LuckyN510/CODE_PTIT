#include<bits/stdc++.h>

using namespace std;

int tong(int L, int R, int a[])
{
    int sum = 0;
    for(int i = L; i <= R; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, q; cin >> n >> q;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        while(q--)
        {
            int L, R; cin >> L >> R;
            cout <<  tong(L, R, a) << endl;
        }
    }
}