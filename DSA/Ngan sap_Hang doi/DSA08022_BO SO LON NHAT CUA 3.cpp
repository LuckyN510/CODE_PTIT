#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n, greater<>());
        if(sum % 3 == 0){
            string res = "";
            for(int i = 0; i < n; i++){
                res += to_string(a[i]);
            }
            cout << res << endl;
            return 0;
        }
        else{
            queue<int> q;
            for(int i = 0; i < n; i++){
                q.push(a[i]);
            }
            int sum = 0;
            while(!q.empty()){
                int u = q.front(); q.pop();
                while(!q.empty()){
                    sum1 += q.front();
                    q.pop();
                }
                if(sum1 % 3 == 0)
            }

        }
    }
}