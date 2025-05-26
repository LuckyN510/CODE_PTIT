#include <bits/stdc++.h>

using namespace std;

void solve(string s) {
    stack<string> st;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == ')' || isalpha(s[i])){
            st.push(string(1, s[i]));
        }
        else if(s[i] == '('){
            string tmp = "";
            while(!st.empty() && st.top() != ")"){
                tmp += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop(); 
            }
            st.push(tmp); 
        }
        else{
            if(s[i] == '+'){
                st.push(string(1, s[i]));
            }
            else if(s[i] == '-'){
                string top = st.top(); st.pop();
                for(auto& x : top){
                    if(x == '+') x = '-';
                    else if(x == '-') x = '+';
                }
                st.push(top);
                st.push(string(1, s[i])); 
            }
        }
    }
    string tmp = "";
    while (!st.empty()) {
        tmp += st.top();
        st.pop();
    }
    cout << tmp << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        solve(s);
    }
}
