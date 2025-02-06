#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    stack<int> st;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(!st.empty() && (x + st.top()) % 2 == 0){
            st.pop();
        }
        else{
            st.push(x);
        }
    }
    cout << st.size() << endl;
}