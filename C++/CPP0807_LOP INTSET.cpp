#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ifstream in("DATA.in");
    int n, m;
    in >> n >> m;
    
    set<int> se;
    for (int i = 0; i < n; i++) 
    {
        int x;
        in >> x;
        se.insert(x);
    }
    set<int> giao;
    for (int i = 0; i < m; i++) 
    {
        int k;
        in >> k;
        if (se.count(k)) 
        {
            giao.insert(k);
        }
    }
    for (int it : giao)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}