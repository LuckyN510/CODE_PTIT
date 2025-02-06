#include<bits/stdc++.h>

using namespace std;

bool check(int n)
{
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        int dem = 0;
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                ++cnt;
                ++dem;
                if(dem == 2) return 0;
                n /= i;
                }
            }
    }
    if(n > 1) ++cnt;
    return cnt == 3;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << check(n) << endl;
    }
}