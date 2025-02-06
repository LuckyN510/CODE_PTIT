#include <bits/stdc++.h>
using namespace std;

void Lower(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

int main()
{
    ifstream in("VANBAN.in");
    string s;
    set<string> se;
    while (in >> s)
    {
        Lower(s);
        se.insert(s);
    }
    
    for (string x : se)
    {
        cout << x << endl;
    }
    
    in.close();
    return 0;
}
