#include<bits/stdc++.h>
using namespace std;

int n, cot[1005], d1[1005], d2[1005];
int x[1005];
int cnt ;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!cot[j] && !d1[i - j + n] && !d2[i + j - 1]){
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if(i == n){
                ++cnt;
            }
            else
                Try(i + 1);
                cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

int main(){
    cin >> n;
    Try(1);
    cout << cnt << endl;
}