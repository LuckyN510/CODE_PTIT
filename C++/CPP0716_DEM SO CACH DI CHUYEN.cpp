#include<bits/stdc++.h>

using namespace std;

int n, k, a[1001][1001], cnt;
int sum;

void Try(int i, int j)
{
    sum += a[i][j];
    if(sum == k && i == n && j == n)
    {
        ++cnt;
    }
    if(i + 1 <= n)
    {
        Try(i + 1, j);
    }
    if(j + 1 <= n)
    {
        Try(i, j + 1);
    }
    sum -= a[i][j];
}

int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        cin >> n >> k;
        cnt = 0;
        sum = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(1, 1);
        cout << cnt << endl;
    }
    return 0;
}
