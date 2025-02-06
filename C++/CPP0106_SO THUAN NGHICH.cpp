#include<bits/stdc++.h>

using namespace std;

bool check(string &s)
{
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] != s[s.length() - i - 1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}