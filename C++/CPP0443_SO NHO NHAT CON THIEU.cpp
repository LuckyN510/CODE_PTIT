#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        int a[n - 1], sum1 = 0, sum2 = 0;
        for(int i = 1; i <= n - 1; i++) 
        {
            cin >> a[i];
            sum1 += a[i];
        }
        for(int i = 1; i <= n; i++) 
        {
            sum2 += i;
        }
        cout << sum2 - sum1;
        cout << endl;
    }
}
