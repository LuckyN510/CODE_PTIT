#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        deque<int> dp;
        for(int i = 0; i < k; i++)
        {
            while(!dp.empty() && a[dp.back()] <= a[i])
            {
                dp.pop_back();
            }
            dp.push_back(i);
        }
        cout << a[dp.front()] << ' ';
        
        for(int i = k; i < n; i++)
        {
            while(!dp.empty() && a[dp.back()] <= a[i])
            {
                dp.pop_back();
            }
            dp.push_back(i);
            
            if(dp.front() <= i - k)
            {
                dp.pop_front();
            }
            cout << a[dp.front()] << ' ';
        }
        cout << endl;
    }
    return 0;
}
