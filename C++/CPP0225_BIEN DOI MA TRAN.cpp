#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int sumRow[n] = {0}, sumCol[n] = {0};
        int maxRow = 0, maxCol = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                sumRow[i] += a[i][j];
                sumCol[i] += a[j][i];
            }
        }
        maxRow = *max_element(sumRow, sumRow + n);
        maxCol = *max_element(sumCol, sumCol + n);
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            res += max(maxRow, maxCol) - sumRow[i];
        }
        
        cout << res << endl;
    }
}
