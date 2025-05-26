#include<bits/stdc++.h>

using namespace std;

string a[9];
int n, k, x[9];// mảng x lưu các hoán vị cột

// ví dụ k = 4 chọn hoán vị 0132 thì mảng sẽ đảo theo vị trí 0132
// 5237 thành 5273
// 2753 thành 2735 ...

// ở đây là hoán vị đồng thời. Ví dụ 
// 5237
// 2753
// 7523
// thì các số cùng hoán vị tại 1 chỉ số

int calc(){
    int minn = 1e9, maxx = -1e9;
    for(int i = 0; i < n; i++){
        int num = 0;
        for(int j = 0; j < k; j++){
            num += (a[i][x[j]] - '0') * pow(10, k - j - 1);
        }
        minn = min(minn, num);
        maxx = max(maxx, num);
    }
    return maxx - minn;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        x[i] = i;
    }
    int res = 1e9;
    do{ 
        res = min(res, calc());
    }while(next_permutation(x, x + k));
    cout << res;
}