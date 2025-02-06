#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        stringstream ss1(s1);
        stringstream ss2(s2);
        string tmp1, tmp2;
        set<string> se1, se2;
        while(ss1 >> tmp1)
        {
            se1.insert(tmp1);
        }
        while(ss2 >> tmp2)
        {
            se2.insert(tmp2);
        }
        for(auto x : se1)
        {
            if(se2.find(x) == se2.end())
            {
                cout<< x <<" ";
            }
        }
        cout << endl;
    }
}