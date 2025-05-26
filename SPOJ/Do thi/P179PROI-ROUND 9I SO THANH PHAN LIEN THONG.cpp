#include <bits/stdc++.h>
using namespace std;

int parent[10005];
int sz[10005];
//nếu chúng có một ước nguyên tố chung lớn hơn hoặc bằng P, ta sẽ kết nối 2 đỉnh này với nhau.

int Find(int u) {
    if (u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

// DSU Union by size
void Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if (u == v) return;
    if (sz[u] < sz[v]) swap(u, v);
    sz[u] += sz[v];
    parent[v] = u;
}

vector<int> getPrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}


bool check(int a, int b, int p, vector<int> primes){
    int GCD = __gcd(a, b);
    for(int prime : primes){
        if(prime < p) continue;
        if(prime > GCD) break;
        if(GCD % prime == 0 && prime >= p){
            return true;
        }
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    vector<int> primes = getPrimes(10000); 
    for (int k = 1; k <= t; k++) {
        int a, b, p;
        cin >> a >> b >> p;
        for (int i = a; i <= b; i++) {
            parent[i] = i;
            sz[i] = 1;
        }
        for (int i = a; i <= b; i++) {
            for (int j = i + 1; j <= b; j++) {
                if (check(i, j, p, primes)) {
                    Union(i, j);
                }
            }
        }
        set<int> res;
        for (int i = a; i <= b; i++) {
            res.insert(Find(i));
        }

        cout << "Case #" << k << ": " << res.size() << endl;
    }
}
