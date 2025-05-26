#include<bits/stdc++.h>

using namespace std;

int n, m, x[101], a[101];
int minn = 1e9;


int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt= 0;
    sort(a , a + n, greater<>());
    for(int i = 0; i < n; i++){
        cnt += m / a[i];
        m %= a[i];
    }
    cout << cnt;
}