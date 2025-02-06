#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool check_Fibo(int n)
{
    if(n == 0 || n == 1) return 1;
    int f1 = 1, f2 = 0;
    for(int i = 0; i < n; i++)
    {
        int fn = f1 + f2;
        if(fn == n) return 1;
        f2 = f1;
        f1 = fn;
    }
    return 0;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            if(check_Fibo(a[i]))
            {
                v.push_back(a[i]);
            }
        }
        for(int it : v) cout << it << ' ';
        cout << endl;
    }
}