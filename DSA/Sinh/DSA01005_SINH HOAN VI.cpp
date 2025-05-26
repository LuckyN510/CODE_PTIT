#include<bits/stdc++.h>

using namespace std;

int n, x[101];
bool visited[101];

void in(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << " ";
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
        cin >> n;
        Try(1);
        cout << endl;
    }
}