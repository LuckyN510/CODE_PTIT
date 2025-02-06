#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(string &s) 
{
    ll sum = 0;
    for(char c : s) 
    {
        sum += c - '0';
    }
    if(sum == 9) return true;
    if(sum < 10) return false;
    string sum_str = to_string(sum);
    return check(sum_str);
}

int main() {
    int t; cin >> t;
    while(t--) 
    {
        string s; cin >> s;
        if(check(s)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}
