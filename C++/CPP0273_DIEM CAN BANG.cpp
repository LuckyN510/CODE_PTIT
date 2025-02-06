#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            sum += a[i];
        }
        int sum_left = 0, sum_right = 0, pos = -1;
        for(int i = 0; i < n; i++)
        {
            int sum_right = sum - sum_left - a[i];
            if(sum_right == sum_left)
            {
                pos = i + 1;
                break;
            }
            sum_left += a[i];
        }
        cout << pos << endl;
    }
}