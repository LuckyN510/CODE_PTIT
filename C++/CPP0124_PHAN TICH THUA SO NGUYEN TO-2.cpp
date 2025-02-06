#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            v.push_back({i, cnt});
        }
    }
    if(n > 1) v.push_back({n, 1});
    for(auto it : v)
    {
        cout << it.first << ' ' << it.second << endl;
    }
}
