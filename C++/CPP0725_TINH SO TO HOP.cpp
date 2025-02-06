#include<bits/stdc++.h>

using namespace std;

int P = 1e9 + 7;
int dp[1001][1001];

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        for(int i = 0; i <= 1000; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(i == 0 || i == j)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                    dp[i][j] %= P;
                }
            }
        }
        cout << dp[n][k] << endl;
    }
}