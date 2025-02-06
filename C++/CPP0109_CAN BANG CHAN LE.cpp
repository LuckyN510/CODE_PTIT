#include<bits/stdc++.h>

using namespace std;

int check(int n)
{
    int demChan = 0, demLe = 0;
    while(n)
    {
        int r = n % 10;
        if(r % 2 == 0) ++demChan;
        else ++demLe;
        n /= 10;
    }
    return demChan == demLe;
}

int main()
{
    int n; cin >> n;
    int max = pow(10, n), min = pow(10, n - 1);
    int cnt = 0;
    for(int i = min; i <= max; i++)
    {
        if(check(i))
        {
            ++cnt;
            cout << i << ' ';
            if(cnt == 10)
            {
                cout << endl;
                cnt = 0;
            }
        }
    }
}