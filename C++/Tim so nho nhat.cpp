#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int res = 0;
        int ans = INT_MAX;
        for (int i = 0; i < s.length(); i++){
            if (isdigit(s[i])){
                res = res * 10 + (s[i] - '0');  
            } 
            else{
                if(res > 0){
                    ans = min(res, ans);
                }
                res = 0;
            }
        }
        if (res > 0){
            ans = min(res, ans);
        }    
        cout << ans << endl;
    }
}
