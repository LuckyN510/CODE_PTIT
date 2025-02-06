#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int calc(string &s)
{
    if(s.length() > 9) return 0;
    ll n = 0;
    for(char i : s)
    {
        if(!isdigit(i)) return 0;
        n = n * 10 + i - '0';
    }
    if(n <= 2147483647) return (int) n;
    return 0;
}

int main()
{
    ifstream fin("DATA.in");
    string s;
    ll sum = 0;
    while(fin >> s) sum += calc(s);
    cout << sum;
    return 0;
}