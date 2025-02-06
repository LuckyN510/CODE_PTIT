#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t; cin >> t;
    while(t--)
    {
       int n;
       ll k;
       cin >> n >> k;
       ll sum = 0;
       for(int i = 1; i <= n; i++)
       {
            sum += (ll)i % k;
       }
       if(sum == k) cout << "1" << endl;
       else cout << "0" << endl;
    }
}
