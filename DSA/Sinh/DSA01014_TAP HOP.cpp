#include<bits/stdc++.h>

using namespace std;

int n, k, s, x[101], a[101];
int cnt;

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= s){
            x[i] = j;
            if(i == k && sum + a[j] == s){
                ++cnt;
            }
            else Try(i + 1, j + 1, sum + a[j]);
        }
    }
}

int main(){
    while(true){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0){
            break;
        }
        for(int i = 1; i <= n; i++){
            a[i] = i;
        } 
        cnt = 0;
        Try(1, 1, 0);
        cout << cnt << endl;    
    }
}