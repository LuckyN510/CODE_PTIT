#include<bits/stdc++.h>

using namespace std;

int n, k, s;
int x[101];
int cnt;
int a[101];

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + j <= s){
            x[i] = j;
            sum += a[j];
            if(i == k && sum == s){
                ++cnt;
            }  
            else{
                Try(i + 1, j + 1, sum);
            }
            sum -= a[j];
        }
    }
}

int main(){
    while(1){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;
        for(int i = 1; i <= n; i++){
            a[i] = i;
        }
        cnt = 0;
        Try(1, 1, 0);
        cout << cnt << endl;
    }
    
}