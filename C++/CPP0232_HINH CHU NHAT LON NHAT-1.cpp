#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> v1;
        for(int i = 0; i < n; i++)
        {
            vector<int> v;
            for(int j = 0; j < m; j++)
            {
                if(i > 0 && a[i][j] == 1)
                    a[i][j] = a[i - 1][j] + 1;
                
                v.push_back(a[i][j]);
            }
            sort(v.begin(), v.end(), greater<int>());
            v1.push_back(v);
        }
        int max_S = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int current_S = (j + 1) * v1[i][j];
                max_S = max(max_S, current_S);
            }
        }
        cout << max_S << endl;
    }
}
