#include<bits/stdc++.h>

using namespace std;

int cot[1001], d1[1001], d2[1001];
int x[1001];
int n; 
int cnt;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1){
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if(i == n){
                ++cnt;
            }
            else Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= 100; i++){
            cot[i] = d1[i] = d2[i] = 1;
        }
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}