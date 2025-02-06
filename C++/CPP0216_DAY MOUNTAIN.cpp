#include<bits/stdc++.h>

using namespace std;

int check(int a[], int l, int r) // kiểm tra dãy con có tăng dần r giảm giầm hoặc luôn tăng hoặc luôn giảm hay ko. NEUS pos = độ dài thì in ra
{
    int pos = l + 1;
    while(pos <= r && a[pos] >= a[pos - 1])
    {
        ++pos;
    }
    while(pos <= r && a[pos] < a[pos - 1])
    {
        ++pos;
    }
    return pos == r + 1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int l, r; cin >> l >> r;
        if(check(a, l, r)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}