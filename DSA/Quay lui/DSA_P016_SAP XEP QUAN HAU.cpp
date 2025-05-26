#include<bits/stdc++.h>

using namespace std;

int n = 8;
int a[1001][1001], cot[1001], d1[1001], d2[1001];
int x[1001];
int maxn;

void in(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i][x[i]];
    }
    maxn = max(sum, maxn);
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1){
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if(i == n){
                in();
            }
            else Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
    }
}

int main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        fill(cot, cot + n + 1, 1);
        fill(d1, d1 + 2 * n, 1);
        fill(d2, d2 + 2 * n, 1);
        maxn = 0;
        Try(1);
        cout << "Test " << i << ": " << maxn << endl;
    }
}