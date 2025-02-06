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
    string s; getline(cin, s);
    Lower(s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word)
    {
        v.push_back(word);
    }
    cout << v.back();
    for(int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn" << endl;
}