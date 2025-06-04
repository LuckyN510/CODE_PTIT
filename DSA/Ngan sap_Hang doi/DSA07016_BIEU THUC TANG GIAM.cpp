#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        s.push_back('I');
        stack<int> st;
        st.push(-1);
        int maxn = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'I'){
                int cnt = i - st.top(); 
                st.pop();
                st.push(i);
                maxn = maxn + cnt;

                for(int j = maxn; j >= maxn - cnt + 1; j--){
                    cout << j;
                }   
            }
        }   
        cout << endl;
    }
    return 0;
}
