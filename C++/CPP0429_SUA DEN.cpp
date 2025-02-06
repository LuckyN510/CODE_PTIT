#include<bits/stdc++.h>

using namespace std;
// Ứng dụng kĩ thuật sliding window

int main()
{   
    // n là số lượng đèn;
    // k là số đèn hoạt động trong 1 khu vực;
    // b là số đèn bị hỏng;
    int n, k, b; cin >> n >> k >> b; 
    vector<int> a(n + 1, 0);
    for(int i = 0; i < b; i++)
    {
        int x; cin >> x;
        a[x] = 1; // đánh dấu đèn bị hỏng
    }
    int cnt = 0; // đếm số lượng đèn bị hỏng
    for(int i = 1; i <= k; i++)
    {
        if(a[i] == 1)
        {
            ++cnt;
        }
    }
    int ans = cnt;
    for(int i = k + 1; i <= n; i++)
    {
        cnt = cnt - a[i - k] + a[i];
        ans = min(ans, cnt);
    }
    cout << ans << endl; // in ra số lượng đèn cần sửa ít nhất đề có k bóng đèn liên tiếp hoạt động
}
