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
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {
        string s; cin >> s;
        Lower(s);
        string number = "";
        for (char c : s)
        {
            if (c == 'a' || c == 'b' || c == 'c') number += '2';
            else if (c == 'd' || c == 'e' || c == 'f') number += '3';
            else if (c == 'g' || c == 'h' || c == 'i') number += '4';
            else if (c == 'j' || c == 'k' || c == 'l') number += '5';
            else if (c == 'm' || c == 'n' || c == 'o') number += '6';
            else if (c == 'p' || c == 'q' || c == 'r' || c == 's') number += '7';
            else if (c == 't' || c == 'u' || c == 'v') number += '8';
            else if (c == 'w' || c == 'x' || c == 'y' || c == 'z') number += '9';
        }
        string reversed_number = number;
        reverse(reversed_number.begin(), reversed_number.end());
        if (reversed_number == number) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
