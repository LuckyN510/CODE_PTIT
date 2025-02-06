#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        int a[n][m], b[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        } 
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while (h1 < h2 && c1 < c2)
        {
            for (int i = c1; i < c2; i++)
            {
                b[h1][i + 1] = a[h1][i];
            }
            for (int i = h1; i < h2; i++)
            {
                b[i + 1][c2] = a[i][c2];
            }
            for (int i = c2; i > c1; i--)
            {
                b[h2][i - 1] = a[h2][i];
            }
            for (int i = h2; i > h1; i--)
            {
                b[i - 1][c1] = a[i][c1];
            }
            ++h1;
            --c2;
            --h2;
            ++c1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << b[i][j] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
