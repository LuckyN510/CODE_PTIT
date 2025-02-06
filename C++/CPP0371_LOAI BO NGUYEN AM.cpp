#include<bits/stdc++.h>

using namespace std;

void Lower(string &s)
{
    for(int i =0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    string s; cin >> s;
    Lower(s);
    for(int i = 0; i < s.length(); i++)  
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
            cout << "." << s[i];
    }
}