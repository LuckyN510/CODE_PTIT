#include<bits/stdc++.h>

using namespace std;

int tongcs(int n)
{
    int r = 0;
    while(n)
    {
        r += n % 10;
        n /= 10;
    }
    if(r >= 10) return tongcs(r);
    else return r;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << tongcs(n) << endl;
    }
}