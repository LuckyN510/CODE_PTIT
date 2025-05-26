#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int num1 = max(a[0] * a[1], a[n - 1] * a[n - 2]);
    int num2 = max(a[0] * a[1] * a[n - 1], a[n - 1] * a[n - 2] * a[n - 3]);
    cout << max(num1, num2);
}