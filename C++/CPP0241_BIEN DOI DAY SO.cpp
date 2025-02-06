#include <bits/stdc++.h>

using namespace std;

int mangDx(int a[], int n) 
{
    int cnt = 0;
    int l = 0, r = n - 1;
    while(l < r)
    {
        if(a[l] == a[r])
        {
            ++l;
            --r;
        }
        else if(a[l] < a[r])
        {
            a[l + 1] += a[l];
            ++l;
            ++cnt;
        }
        else
        {
            a[r - 1] += a[r];
            --r;
            ++cnt;
        }
    }
    return cnt;
} 

int main() 
{
    int t; cin >> t;
    while(t--) 
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << mangDx(a, n) << endl;
    }
}
