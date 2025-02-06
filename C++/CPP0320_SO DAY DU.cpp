#include <bits/stdc++.h>

using namespace std;

int solve(string &s)
{
    int d[10] = {0};
    if(s[0] == '0') return -1;
    for(char c : s)
    {
        if(isdigit(c)) 
        {
            d[c - '0']++;
        }
        else return -1;
    }
    for(int i = 0; i <= 9; i++)
    {
        if(d[i] == 0) return 0;
    }
    return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		string s;
		cin >> s;
		if(solve(s) == -1) cout<<"INVALID"<<endl;
		else if(solve(s) == 1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}