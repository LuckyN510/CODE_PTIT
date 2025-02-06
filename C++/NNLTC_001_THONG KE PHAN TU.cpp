#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<int, int> mp;
    vector<int> v;
    while(cin >> n)
    {   
        if(mp[n] < 1)
        {
            v.push_back(n);
        }
        mp[n]++;
    }
    for(int it : v)
    {
        cout << it << ' ' << mp[it] << endl;
    }
}
