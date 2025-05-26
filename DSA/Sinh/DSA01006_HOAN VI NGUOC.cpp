#include<bits/stdc++.h>

using namespace std;

int n, x[101];
bool visited[101];
vector<vector<int>> res;

void in(){
    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(x[i]);
    }
    res.push_back(v);
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!visited[j]){
            x[i] = j;
            visited[j] = true;
            if(i == n){
                in();
            }
            else Try(i + 1);
            visited[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        cin >> n;
        Try(1);
        reverse(res.begin(), res.end());
        for(auto x : res){
            for(int it : x){
                cout << it;
            }
            cout << " ";
        }
        cout << endl;
    }
}