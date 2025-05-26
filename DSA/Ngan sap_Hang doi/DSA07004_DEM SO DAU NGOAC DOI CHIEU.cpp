#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; 
        cin >> s;
        stack<int> st;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')'){
                if(!st.empty() && s[st.top()] == '('){
                    st.pop();
                }
                else{
                    st.push(i);
                }
            }
        }
        while(!st.empty()){
            int top1 = st.top(); st.pop();
            int top2 = st.top(); st.pop();
            if(s[top1] == s[top2]) cnt++;
            else cnt += 2;
        }
        cout << cnt << endl;
    }
}