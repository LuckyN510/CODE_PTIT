#include<bits/stdc++.h>

using namespace std;

int n, m, x[101], a[101];
int minn = 1e9;
void in(int i){
    minn = min(minn, i);
}


void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= m){
            x[i] = a[j];
            sum += a[j];
            if(sum == m){
                in(i);
            }
            else{
                Try(i + 1, j + 1, sum);
            }
            sum -= a[j];
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    Try(1, 1, 0);
    if(minn == 1e9){
        cout << -1;
    } 
    else {
        cout << minn;
    }
}