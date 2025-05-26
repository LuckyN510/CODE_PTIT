#include <bits/stdc++.h>
using namespace std;

int n, k, a[101], x[101]; 
vector<int> v;
int cnt = 0;

bool check(vector<int>& v) {
    for(int i = 1; i < v.size(); i++) {
        if(v[i] <= v[i - 1]) {
            return false;
        }
    }
    return true;
}

void in(){
    v.clear(); 
    for(int i = 1; i <= k; i++) {
        v.push_back(a[x[i]]);
    }
    if(check(v)) {
        ++cnt;  
    }
}

void Try(int i, int pos){
    for(int j = pos; j <= n; j++) {
        x[i] = j;
        if(i == k) {
            in(); 
        } 
        else {
            Try(i + 1, j + 1); 
        }
    }
}

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    Try(1, 1);  
    cout << cnt << endl; 
}
