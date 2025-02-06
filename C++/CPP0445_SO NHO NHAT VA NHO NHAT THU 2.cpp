#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        set<int> se;
        vector<int> v;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        for(int x : se)
        {
            v.push_back(x);
        }
        if(v.size() == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        cout << v[0] <<' ' << v[1] << endl; 
    }
}
