#include <bits/stdc++.h>
using namespace std;

int n;
int a[101][101];
string dp[101][101];

string binToHex(string s){
    // Thêm số 0 vào đầu cho đủ bội của 4
    while(s.length() % 4 != 0){
        s = "0" + s;
    }
    string res;
    for(int i = 0; i < s.length(); i += 4){
        string tmp = s.substr(i, 4);
        int d = 0;
        for(int j = 0; j < 4; j++){
            d += (tmp[j] - '0') * pow(2, (3 - j));
        }
        char c;
        if(d >= 0 && d <= 9){
            c = d + '0';
        } else {
            c = d - 10 + 'A';
        }
        res += c;
    }
    // Xóa các số 0 ở đầu nếu có
    while(res.length() > 1 && res[0] == '0'){
        res.erase(res.begin());
    }

    return res;
}

int main(){
    cin >> n;
    // Nhập ma trận
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    // Khởi tạo hàng và cột đầu
    for(int i = 1; i <= n; i++){
        dp[0][i] = "";
        dp[i][0] = "";
    }
    // Tính giá trị chuỗi nhị phân đường đi
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            char tmp = (a[i][j] + '0');
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + tmp;
        }
    }
    string bin = dp[n][n];
    cout << binToHex(bin) << endl;
}
