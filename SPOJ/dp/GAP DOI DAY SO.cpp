#include<bits/stdc++.h>

using namespace std;

long long s[51];

void init(){
    s[0] = 1;
    for(int i = 1; i <= 50; i++){
        s[i] = 2 * s[i - 1] + 1;
    }
}

int findNum(int n, long long k){
    if(n == 0) return 1;
    if(k <= s[n - 1]){
        return findNum(n - 1, k);
    }
    else if(k == s[n - 1] + 1){
        return n + 1;
    }
    else{
        return findNum(n - 1, k - s[n - 1] - 1);
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int n;
        long long k; 
        cin >> n >> k;
        cout << findNum(n - 1, k) << endl;
    }
}