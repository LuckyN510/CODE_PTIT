#include<bits/stdc++.h>

using namespace std;

int n,k, a[1001], s;
bool check = false;
int x[1001];
int cnt = 0;

void in(){
    ++cnt;
    if(cnt == k){
        check = true;
    }
}

void Try(int i, int pos, int sum){
    if(check){
        return;
    }
    for(int j = 1; j <= n; j++){
        if(sum + a[j] <= s){
            x[i] = j;
            if(sum + a[j] == s){
                in();
            }
            else Try(i + 1, j + 1, sum + a[j]);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        s = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            s += a[i];
        }
        if(s % k != 0){
            cout << "0\n";
            continue; 
        }
        s /= k;
        sort(a + 1, a + n + 1);
        Try(1, 1, 0);
        if(check) cout << "1\n";
        else cout << "0\n";
    }
}