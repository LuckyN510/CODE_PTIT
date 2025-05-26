#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top() == '('){
                    res += 2;
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        cout << res << endl;
    }
}