#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        for(int i = 0; i < k; i++){
            cin >> c[i];
        }
        vector<int> v;
        int index1 = 0, index2 = 0, index3 = 0;
        while(index1 < n && index2 < m && index3 < k){
            if(a[index1] == b[index2] && b[index2] == c[index3]){
                v.push_back(a[index1]);
                ++index1;
                ++index2;
                ++index3;
            }
            else if(a[index1] > b[index2]){
                ++index2;
            }
            else if(b[index2] > c[index3]){
                ++index3;
            }
            else if(c[index3] > a[index1]){
                ++index1;
            }
        }
        if(v.empty()){
            cout << "NO" << endl;
        } 
        else{
            for (int num : v){
                cout << num << " ";
            }
            cout << endl;
        }
    }
}