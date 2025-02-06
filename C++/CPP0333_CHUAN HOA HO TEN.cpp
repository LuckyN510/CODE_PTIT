#include<bits/stdc++.h>

using namespace std;

void ChuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}

void Upper(string &s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
}

int main()
{
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word)
    {
        ChuanHoa(word);
        v.push_back(word);
    }
    Upper(v.back());
    for(int i = 0; i < v.size(); i++)
    {
        if(i != v.size() - 1)
        {
            cout << ' ';
        }
        else cout << ", ";
         cout << v[i];
    }
}