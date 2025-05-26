#include<bits/stdc++.h>

using namespace std;

int n, x[101], a[101], s = 0;
vector<vector<int>> res;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

void in(int i){
    vector<int> v;
    for(int j = 1; j <= i; j++){
        v.push_back(x[j]);
    }
    res.push_back(v);
}

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(isPrime(sum + a[j])){
                in(i);
            }
            Try(i + 1, j + 1, sum + a[j]);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            s += a[i];
        }
        sort(a + 1, a + n + 1, greater<>());
        Try(1, 1, 0);
        sort(res.begin(), res.end());
        for(auto it : res){
            for(int x : it){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}