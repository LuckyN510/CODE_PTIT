#include<bits/stdc++.h>

using namespace std;
// Ứng dụng sliding window
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n + 1];
        int d = 0; // đếm số lượng các số nhỏ hơn k trong mảng
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i] <= k)
            {
                ++d;
            }
        }
        int cnt = 0; // đếm số lượng các phần tử nhỏ hơn k trong cửa sổ có kích thước là d
        for(int i = 1; i <= d; i++)
        {
            if(a[i] <= k) ++cnt;
        }
        int ans = cnt;
        for(int i = d + 1; i <= n; i++)
        {
            if(a[i - d] <= k) --cnt;
            if(a[i] <= k) ++cnt;
            ans = max(ans, cnt);
        }
        cout << d - ans << endl;// kích thước của cửa sổ trừ đi số lượng các số <= k ở mỗi cửa sổ
    }
}