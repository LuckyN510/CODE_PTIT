#include<bits/stdc++.h>

using namespace std;

bool check(char c, char d){
    return (c == '['&& d == ']') || (c == '{' && d == '}' || c == '(' && d == ')'); 
}

bool solve(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false;
            char u = st.top();
            st.pop();
            if(!check(u, s[i])){
                return false;
            } 
        }
    }
    return st.empty();
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(solve(s)) cout << "YES\n";
        else cout << "NO\n";
    }   
}