#include<bits/stdc++.h>

using namespace std;

void Lower(string &s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

int main()
{
    int t; cin >> t;
    cin.ignore();
    map<string, int> mp;
    while(t--)
    {
        string s; 
        getline(cin, s);
        Lower(s);
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss >> word)
        {
            v.push_back(word);
        }
        string last_name = v.back();
        string first;
        for(int i = 0; i < v.size() - 1; i++)
        {
            first += v[i][0];
        }
        string email = last_name + first;
        mp[email]++;
        if(mp[email] >= 2)
        {
            cout << email << mp[email] << "@ptit.edu.vn" << endl;
        }
        else
        {
            cout << email << "@ptit.edu.vn" << endl;
        }
    }
}
