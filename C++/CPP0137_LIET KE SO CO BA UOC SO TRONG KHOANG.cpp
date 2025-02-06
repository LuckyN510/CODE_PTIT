#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> P(1000009, 1);
vector<int> b;
vector<int> pos(1000009);

void sieve() 
{
    for (ll i = 2; i <= 1000000; i++) 
    {
        if (P[i]) 
        {
            b.push_back(i);
            for (ll j = i * i; j <= 1000000; j += i) 
            {
                P[j] = 0;
            }
        }
        pos[i] = b.size() - 1;
    }
}

int main()
 {
    sieve();
    int t; cin >> t;
    while (t--) 
    {
        ll L, R;
        cin >> L >> R;
        int k = sqrt(L), h = sqrt(R);
        int m = pos[k], n = pos[h];
        cout << n - m + 1 << endl;
       
    }
}