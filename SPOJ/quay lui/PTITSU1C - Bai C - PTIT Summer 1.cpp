#include <bits/stdc++.h>
using namespace std;

int a[101];
int n, s;
int x[101];            
bool visited[101];     
int maxVal = 0;

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(!visited[j]) {
            x[i] = a[j];
            visited[j] = true;
            sum += a[j];
            if(i == 3){
                if(sum <= s){
                    maxVal = max(maxVal, sum);
                }
            } else {
                Try(i + 1, j + 1, sum);
            }
            sum -= a[j];
            visited[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(visited, false, sizeof(visited));
        maxVal = 0; 
        cin >> n >> s;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        Try(1, 1, 0);
        cout << maxVal << endl;
    }
    return 0;
}
