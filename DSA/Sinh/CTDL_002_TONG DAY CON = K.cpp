#include<bits/stdc++.h>

using namespace std;

int n, k, a[11], x[11];

vector<vector<int>> res;

void in(int i){
    vector<int> v;
    for(int j = 1; j <= i; j++){
        v.push_back(a[x[j]]);
    }
    res.push_back(v);
}

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= k){
            x[i] = j;
            if(sum + a[j] == k){
                in(i);
            }
            else Try(i + 1, j + 1, sum + a[j]);
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1); 
    Try(1, 1, 0);
    sort(res.begin(), res.end(), greater<>());
    for(auto x : res){
        for(int it : x){
            cout << it << " ";
        }
        cout << endl;
    }
    cout << res.size() << endl;
}