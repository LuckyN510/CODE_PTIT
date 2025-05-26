#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        int n; 
        cin >> n;
        vector<string> a(n);
        set<int> se;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            for(int j = 0; j < a[i].length(); j++){
                if(isdigit(a[i][j]))
                    se.insert(a[i][j] - '0');
            }
        }
        for(int x : se){
            cout << x << " ";
        }
        cout << endl;
    }
}