#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1; getline(cin, s1);
    scanf("\n");
    string s2; cin >> s2;
    stringstream ss(s1);
    string tmp;
    vector<string> v;
    while(ss >> tmp)
    {
        if(tmp != s2)
        {
            v.push_back(tmp);
        }
    }
    for(string it : v)
    {
        cout << it <<' ';
    }
}