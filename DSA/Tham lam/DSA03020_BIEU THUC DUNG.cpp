#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans = 0, cnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '['){
                cnt++;
            }
            else if(s[i] == ']'){
                cnt--;
            }
            if(cnt < 0){
                for(int j = i + 1; j < s.length(); j++){
                    if(s[j] == '['){
                        ans += j - i; // là số lần đổi chỗ giữa các phần tử kề nhau
                        swap(s[i], s[j]);
                        cnt = 1; // dánh dấu phần thử hiện tại i là 1 và i+1 là 0
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}