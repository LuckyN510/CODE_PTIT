    #include<bits/stdc++.h>

    using namespace std;

    int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[4 * n][4 * n];
        int cnt = 1;
        for(int i = 0; i < 4 * n; i++){
            for(int j = 0; j < 4 * n; j++){
                a[i][j] = cnt++;
            }
        }
        vector<int> ans;
        int h1 = 0, h2 = 4 * n - 1, c1 = 0, c2 = 4 * n - 1;
        while(h1 < h2 && c1 < c2){
            for(int i = h2; i >= h1; i--){
                ans.push_back(a[i][c2]);
            }
            c2--;
            c1++;
            for(int i = c2; i >= c1; i--){
                ans.push_back(a[h1][i]);
            }
            h1++;
            h2--;
            for(int i = h1; i <= h2; i++){
                ans.push_back(a[i][c1]);
            }
            c1++;
            c2--;
            for(int i = c1; i <= c2; i++){
                ans.push_back(a[h2][i]);
            }
            h2--;
            h1++;
        }
        reverse(ans.begin(), ans.end());
        for(int x : ans){
            cout << x << ' ';
        }
        cout << endl;
        vector<int> res;
        int row1 = 0, row2 = 4 * n - 1, col1 = 0, col2 = 4 * n - 1;
        while(row1 < row2 && col1 < col2){
            for(int i = row1; i <= row2; i++){
                res.push_back(a[i][col1]);
            }
            col1++;
            col2--;
            for(int i = col1; i <= col2; i++){
                res.push_back(a[row2][i]);
            }
            row2--;
            row1++;
            for(int i = row2; i >= row1; i--){
                res.push_back(a[i][col2]);
            }
            col2--;
            col1++;
            for(int i = col2; i >= col1; i--){
                res.push_back(a[row1][i]);
            }
            row1++;
            row2--;

        }
        reverse(res.begin(), res.end());
        for(int x : res){
            cout << x << ' ';
        }
        cout << endl;
    }
}


