#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int demDo = 0, demTrang = 0, demXanh = 0;
    for(char c : s){
        if(c == 'D') demDo++;
        else if(c == 'T') demTrang++;
        else demXanh++;
    }
    int ans = 0;
    for(int i = 0; i < demXanh; i++){
        if(s[i] == 'T'){
            int pos = demXanh;
            while(s[pos] != 'X'){
                ++pos;
            }
            swap(s[pos], s[i]);
            ++ans;
        }
        // nếu vị trí hiện tại là đỏ thì ưu tiên swap về cuối
        else if(s[i] == 'D'){
            int pos = n - 1;
            while(s[pos] != 'X'){
                pos--;
            }
            swap(s[i], s[pos]);
            ++ans;
        }
    }
    for(int i = demXanh; i < demXanh + demTrang; i++){
        if(s[i] != 'T'){
            int pos =  demXanh + demTrang;
            while(s[pos] != 'T'){
                ++pos;
            }
            swap(s[pos], s[i]);
            ++ans;
        }
    }
    cout << ans;
}