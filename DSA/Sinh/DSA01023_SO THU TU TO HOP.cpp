#include<bits/stdc++.h>

using namespace std;

int n, k, a[101], x[101];
bool visited[101];
int cnt, res;

void checkToHop(){
    ++cnt;
    bool match = true;
    for(int i = 1; i <= n; i++){
        if(x[i] != a[i]){
            match = false;
            break;
        }
    }
    if(match){
        res = cnt;
    }
}

void Try(int i){
    for(int j = x[i - 1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            checkToHop();
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        cnt = 0;
        res = 0;
        Try(1);
        cout << res << endl;
    }
}