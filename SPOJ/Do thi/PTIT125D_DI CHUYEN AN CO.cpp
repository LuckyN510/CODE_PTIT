#include<bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int a[6][6];
int n;
int res = 0;
// tim duong di tu (1, 1) den (5, 5) ma phai an sach het co
void dfs(int i, int j, int lawn){
    if(i == 5 && j == 5 && lawn + n == 25){
        res++;
        return;
    }
    a[i][j] = 1;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= 5 && j1 >= 1 && j1 <= 5 && a[i1][j1] == 0){
            dfs(i1, j1, lawn + 1);
        }
    }
    a[i][j] = 0;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    dfs(1, 1, 1);
    cout << res << endl;
}