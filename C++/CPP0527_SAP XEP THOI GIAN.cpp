#include <bits/stdc++.h>

using namespace std;

struct Time
{
    int h, p, s;
};

bool cmp(Time a, Time b)
{
    if(a.h != b.h) return a.h < b.h;
    if(a.p != b.p) return a.p < b.p;
    return a.s < b.s;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for(int i = 0; i < n; i++) cin >> a[i].h >> a[i].p >> a[i].s;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i].h << ' ' << a[i].p << ' ' << a[i].s << endl;
    return 0;
}