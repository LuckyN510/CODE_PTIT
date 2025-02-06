#include<bits/stdc++.h>

using namespace std;

int n, k, x[100];
void Try(int i)
{
    for(int j = x[i - 1] + 1; j <= n; j++)
    {
        x[i] = j;
        if(i == k)
        {
            for(int l = 1; l <= k; l++)
            {
                cout << x[l];
            }
            cout << ' ';
        }
        else Try(i + 1);
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}