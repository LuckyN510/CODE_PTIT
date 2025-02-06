#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n, m; 
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        
        set<int> row, col;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(a[i][j] == 1)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for(int i : row) 
        {
            for(int j = 0; j < m; j++)
            {
                a[i][j] = 1;
            }
        }
        
        for(int j : col)
        {
            for(int i = 0; i < n; i++)
            {
                a[i][j] = 1;
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }
}
