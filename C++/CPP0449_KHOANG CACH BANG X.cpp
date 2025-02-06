#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k; 
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        bool found = false;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++)
        {
            int target = abs(a[i] + k);
            if(binary_search(a.begin() + i + 1, a.end(), target))
            {
                found = true;
                break;
            }
        }
        if(found) cout << "1" << endl;
        else cout << "-1" << endl;
    }
}
