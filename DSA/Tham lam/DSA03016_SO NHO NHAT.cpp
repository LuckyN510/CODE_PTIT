#include<bits/stdc++.h>

using namespace std;


string solve(int s, int d){
    if (s == 0 && d > 1) return "-1";
    if (s > d * 9) return "-1";
    string tmp = string(d, '0');
    int n = tmp.length();
    for(int i = n - 1; i >= 0; i--){
        if(s > 9){
            tmp[i] = '9';
            s -= 9;
        }
        else{
            if(i != 0){
                tmp[i] += s - 1;
                tmp[0] = '1';
            }
            else if(i == 0){
                tmp[i] += s;
            }
            return tmp;
        }
    }
    return tmp;
}

int main(){
    int t; cin >> t;
    while(t--){
        int s, d; cin >> s >> d;
        cout << solve(s, d) << endl;
    }
}