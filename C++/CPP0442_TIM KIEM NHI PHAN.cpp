#include<bits/stdc++.h>

using namespace std;

int Binary_search(int n, int a[], int x)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
        {
            return 1;
        }
        else if(a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, X; cin >> n >> X;
        int a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        cout << Binary_search(n, a, X) << endl;
        
    }
}