#include<bits/stdc++.h>
using namespace std;
// Tư tưởng: tìm ra tập hợp có tổng bằng s / 2
int n, s = 0, a[101], x[101], check;

void Try(int i, int pos, int sum){
    if(check){
        return;
    }
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j] == s){
                check = 1;
            }
            else    
                Try(i + 1, j + 1, sum + a[j]);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        s = 0;
        cin >> n; 
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            s += a[i];
        }
        if(s % 2 == 1){
            cout << "NO" << endl;
            continue;
        }
        s /= 2;
        sort(a + 1, a + n + 1);
        Try(1, 1, 0);
        if(check) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
