#include<bits/stdc++.h>

using namespace std;

bool check(string &s)
{
    int chan = 0, le = 0;
   
}
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; getline(cin, s);
        stringstream ss(s);
        string word;
        int chan = 0, le = 0, len = 0;
        while(ss >> word)
        {
            if(stoi(word) % 2 == 0) ++chan;
            else ++le;
            ++len;  
        }
        if(len % 2 == 0 && chan > le || len % 2 == 1 && le > chan)  
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }
}