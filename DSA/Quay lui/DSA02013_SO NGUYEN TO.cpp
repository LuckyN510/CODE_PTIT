#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, p, s;
int x[101]; 
vector<int> v; 
vector<vector<int>> res;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

void xuly(int i) {
	vector<int> v1;
    for (int j = 1; j <= i; j++) {
		v1.push_back(x[j]);
    }
    res.push_back(v1);
}

void Try(int i, int pos, int sum) {
    for (int j = pos; j < v.size(); j++) { 
        if (sum + v[j] <= s) {
            x[i] = v[j]; 
            sum += v[j];
            if (i == n && sum == s) { 
                xuly(i);
            } 
			else if (i < n) {
                Try(i + 1, j + 1, sum); 
            }
            sum -= v[j];
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> p >> s;
        v.clear(); 
		res.clear();
        for (int i = p + 1; i <= s; i++) {
            if (isPrime(i)) {
                v.push_back(i);
            }
        }
        Try(1, 0, 0);
		cout << res.size() << endl;
		for(auto x : res){
			for(int j : x){
				cout << j << " ";
			}
			cout << endl;
		}
    }
}
