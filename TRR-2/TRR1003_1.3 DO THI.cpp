#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int res[1001][10001];
int deg[1001];
int n;

int main()
{
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test;
    cin >> test;
    if (test == 1)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            deg[i] = 0;
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (a[i][j])
                {
                    deg[i]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << deg[i] << " ";
        }
        cout << endl;
    }
    else if (test == 2)
    {
        cin >> n;
        vector<pair<int, int>> edges;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] && i < j)
                {
                    edges.push_back({i, j});
                }
            }
        }

        int m = edges.size();
        for (int j = 0; j < m; j++)
        {
            int u = edges[j].first;
            int v = edges[j].second;
            res[u][j] = 1;
            res[v][j] = 1;
        }

        cout << n << " " << m << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}
