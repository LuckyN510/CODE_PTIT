#include <bits/stdc++.h>
using namespace std;

int s[101];
// mang s luu lai do dai tai cac thoi diem 0 1 2 3 4 5 
void init(){
    s[0] = 3;
    for(int i = 1; i <= 100; i++){
        s[i] = 2 * s[i - 1] + 3 + i;
        if(s[i] > 1e9) break;
    }
}

char Find(int n, int k){
    if(n == 0){
        if(k == 1) return 'm';
        else return 'o';
    }
    if(k <= s[n - 1]){
        return Find(n - 1, k);
    }
    else if(k <= s[n - 1] + 3 + n){
        if(k == s[n - 1] + 1) return 'm';
        else return 'o';
    }
    else{
        return Find(n - 1, k - s[n - 1] - (n + 3));
    }   
}

int main(){
    init();
    int k; cin >> k;
    // vi tri thu k
    int n = 0;
    while(s[n] < k){
        ++n;
    }
    cout << Find(n, k);
}