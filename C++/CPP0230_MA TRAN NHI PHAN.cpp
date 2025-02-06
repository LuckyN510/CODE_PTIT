#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1][4];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt_num = 0, cnt_row = 0;
    for(int i = 1; i <= n; i++)
    {
        int cnt_num = 0; 
        for(int j = 1; j <= 3; j++)
        {
            if(a[i][j] == 1)
                ++cnt_num;
        }
        if(cnt_num >= 2)
        {
            ++cnt_row;
        }
    }
    cout << cnt_row << endl;
}
