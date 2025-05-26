#include<bits/stdc++.h>

using namespace std;

int dp[101];

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.length();
		if(s[0] == '0'){
			cout << 0 << endl;
			continue;;
		}
		s = "@" + s;
		dp[0] = 1;
		dp[1] = 1;
		for(int i = 2; i <= n; i++){
			dp[i] = 0;
			if(s[i] != '0') dp[i] += dp[i - 1];
			if(s[i - 1] == '1' || s[i - 1] == '2' && s[i] <= '6') dp[i] += dp[i - 2];
		}
		cout << dp[n] << endl;
	}
}