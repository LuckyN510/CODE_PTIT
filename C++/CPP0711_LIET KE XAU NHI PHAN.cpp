#include<bits/stdc++.h>

using namespace std;

int n, x[25];

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n)
        {
            for(int l = 1; l <= n; l++)
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
        cin >> n;
        Try(1);
        cout << endl;
    }
}