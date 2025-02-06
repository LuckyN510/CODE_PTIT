#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[1001];
ll mod = 1e9 + 7;

void Fibo()
{
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 1000; i++)
	{
		F[i] = (F[i - 1] + F[i - 2]) % mod;
	}
}

int main()
{
	Fibo();
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		cout << F[n] << endl;
	}
}