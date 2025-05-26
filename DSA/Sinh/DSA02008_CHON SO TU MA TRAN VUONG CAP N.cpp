#include<bits/stdc++.h>

using namespace std;

int n, k, a[11][11];
bool visited[11];
vector<vector<int>> v;
vector<int> x(11);

void in(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i][x[i]];
    }
    if(sum == k){
        v.push_back(x);
    }
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
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    } 
    Try(1);
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        for(int j = 1; j <= n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}