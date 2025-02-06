#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		bool ok = 1;
		for(char c : s)
		{
			if(c != '6' && c != '8' && c != '0')
			{
				ok = 0;
				break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}