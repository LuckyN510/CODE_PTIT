#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.length();
        stack<string> st;
        for(int i = 0; i < n; i++){
            if(isalpha(s[i])){
                st.push(string(1, s[i]));
            }
            else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                string o1 = st.top(); st.pop();
                string o2 = st.top(); st.pop();
                string tmp = o2 + s[i] + o1;
                st.push(tmp);
            }
        }
        cout << st.top() << "\n";
    }
}