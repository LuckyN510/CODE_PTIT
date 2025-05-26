#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int k; 
		string s;
		cin >> k >> s;
		priority_queue<int> pq;
		map<char, int> mp;
		for(char c : s){
			mp[c]++;
		}
		for(auto x : mp){
			pq.push(x.second);
		}
		while(k--){
			int top = pq.top(); pq.pop();
			top--;
			pq.push(top);
		}
		int sum = 0;
		while(!pq.empty()){
			sum += pow(pq.top(), 2);
			pq.pop();
		}
		cout << sum << endl;

	}
}