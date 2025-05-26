#include<bits/stdc++.h>

using namespace std;

int n, x[101];
vector<vector<int>> res;

void in(int i){
    vector<int> v;
    for(int j = 1; j <= i; j++){
        v.push_back(x[j]);
    }
    res.push_back(v);
}

void Try(int i, int pos, int sum){
    for(int j = pos; j >= 1; j--){
        if(sum + j <= n){
            x[i] = j;
            if(sum + j == n){
                in(i);
            }
            else Try(i + 1, j, sum + j);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        cin >> n;
        Try(1, n, 0);
        cout << res.size() << endl;
        for(auto it : res){
            cout <<"(";
            for(int j = 0; j < it.size(); j++){
                cout << it[j];
                if(j != it.size() - 1){
                    cout << " ";
                } 
            }
            cout << ") ";
        }
        cout << endl;
    }
}