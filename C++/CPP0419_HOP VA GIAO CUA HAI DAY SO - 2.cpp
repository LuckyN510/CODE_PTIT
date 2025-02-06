#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
		int n, m; cin >> n >> m;
		int a[n], b[m];
		set<int> se1, se2, Union;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			se1.insert(a[i]);
		}
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
			se2.insert(b[i]);
		}
		vector<int> Intersection;
		for(int x : se1)
		{
			if(se2.count(x))
			{
				Intersection.push_back(x);
			}
			Union.insert(x);
		}
		for(int x : se2)
		{
			Union.insert(x);
		}
		for(int x : Union)
		{
			cout << x << ' ';
		}
		cout << endl;
		for(int x : Intersection)
		{
			cout << x << ' ';
		}
		cout << endl;
	}
}