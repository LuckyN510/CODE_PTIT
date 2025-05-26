#include<bits/stdc++.h>

using namespace std;

int n, a[101], x[101];
bool visited[101];
int cnt, res;

void checkPermutation(){
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
    for(int j = 1; j <= n; j++){
        if(!visited[j]){
            x[i] = j;
            visited[j] = true;
            if(i == n){
                checkPermutation();
            }
            else Try(i + 1);
            visited[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        cnt = 0;
        res = 0;
        memset(visited, false, sizeof(visited));
        Try(1);
        cout << res << endl;
    }
}