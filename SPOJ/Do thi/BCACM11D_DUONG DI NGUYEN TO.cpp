#include<bits/stdc++.h>

using namespace std;

string s[11];
int n, k;
int x[11];

int calc(){
    int maxn = -1e9, minn = 1e9;
    for(int i = 0; i < n; i++){
        int num = 0;
        for(int j = 0; j < k; j++){
            num += (s[i][x[j]] - '0') * pow(10, k - j - 1);
        }
        minn = min(minn, num);
        maxn = max(maxn, num);
    }
    return maxn - minn;
}


int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < k; i++){
        x[i] = i;
    }
    int res = 1e9;
    do{
        res = min(res, calc());
    }while(next_permutation(x, x + k));
    cout << res << endl;
}