#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in;
    in.open("DATA.in", ios::in);
    int n;
    map<int, int> mp;
    while(in >> n)
    {
       mp[n]++;
    }
    for(auto it : mp)
    {
        cout << it.first << ' ' << it.second << endl;
    }
    in.close();
}