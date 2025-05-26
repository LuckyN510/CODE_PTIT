#include<bits/stdc++.h>
using namespace std;

int solve(int s, int t){
	queue<pair<int, int>> q;
	set<int> se;
	q.push({0, s});
	se.insert(s);
	while(!q.empty()){
        pair<int, int> it = q.front(); q.pop(); 
		if(it.second == t) return it.first;
        if(it.second > 1 && !se.count(it.second - 1)){
            q.push({it.first + 1, it.second - 1});
            se.insert(it.second - 1);
        }
        if(it.second < t && !se.count(it.second * 2)){
            q.push({it.first + 1, it.second * 2});
            se.insert(it.second * 2);
        }
	}
    return -1;
}

int main(){
    int test; cin >> test;
    while(test--){
        int s, t;
        cin >> s >> t;
        cout << solve(s, t);
        cout << endl;
    }
}