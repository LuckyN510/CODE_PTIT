#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    string s;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        int dem = 0;
        while(ss >> tmp)
        {
            ++dem;
        }
        cout << dem << endl;
    }
}