#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<string> st;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ']' || isalpha(s[i])) {
                st.push(string(1, s[i]));
            }
            else if (s[i] == '[') {
                string tmp;
                while (!st.empty() && st.top() != "]") {
                    tmp += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop();
                st.push(tmp);
            }
            else { 
                string num;
                while (i >= 0 && isdigit(s[i])) {
                    num.push_back(s[i]);
                    i--;
                }
                i++; 
                reverse(num.begin(), num.end());
                string top = st.top();
                st.pop();
                string tmp;
                for(int i = 0; i < stoi(num); i++){
                    tmp += top;
                }
                st.push(tmp);
            }
        }
        while (!st.empty()) {
           cout << st.top();
           st.pop();
        }
        cout << endl;
    }
}
