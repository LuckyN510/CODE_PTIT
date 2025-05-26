#include<bits/stdc++.h>

using namespace std;

void maxNum(int n, int s){
    string res = "";
    for(int i = 1; i <= n; i++){
        for(int j = 9; j >= 0; j--){
            if(s >= j){
                res += to_string(j);
                s -= j;
                break;
            }
        }
    }
    cout << res;
}

void minNum(int n, int s){
    string res = "";
    for(int i = 1; i < n; i++){
        for(int j = 9; j >= 0; j--){
            if(s > j){
                res += to_string(j);
                s -= j;
                break;
            }
        }
    }
    res += to_string(s);
    reverse(res.begin(), res.end());
    cout << res << " ";
}

int main(){
    int n, s;
    cin >> n >> s;
    if(n == 0 || s == 0 || n * 9 < s){
        cout << "-1 -1" << endl;
        return 0;
    }
    minNum(n, s);
    maxNum(n, s);

}