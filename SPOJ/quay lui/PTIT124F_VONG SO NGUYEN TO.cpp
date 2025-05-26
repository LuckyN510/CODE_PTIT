#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<bool> visited;
vector<vector<int>> res;
vector<bool> is_prime;

void sieve(int limit) {
    is_prime.assign(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void Try(int i) {
    for (int j = 2; j <= 2 * n; ++j) {
        if (!visited[j] && is_prime[j + a[i - 1]]) {
            a[i] = j;
            visited[j] = true;
            if (i == 2 * n - 1) {
                if (is_prime[a[i] + a[0]]) {
                    res.push_back(a);
                }
            } else {
                Try(i + 1);
            }
            visited[j] = false;
        }
    }
}

int main() {
    cin >> n;
    sieve(2 * n + 2 * n); 
    a.assign(2 * n, 0);
    visited.assign(2 * n + 1, false);
    a[0] = 1;
    visited[1] = true;
    Try(1);
    cout << res.size() << '\n';
    if(res.size() > 10000){
        for(int i = 0; i < 10000; i++){
            for(int j = 0; j < 2 * n; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        for(auto x : res){
            for(int it : x){
                cout << it << " ";
            }
            cout << endl;
        }
    }
}
