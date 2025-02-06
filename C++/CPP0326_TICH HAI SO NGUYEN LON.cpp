#include<bits/stdc++.h>

using namespace std;

string mul(string s1, string s2){
    int len1 = s1.length();
    int len2 = s2.length();
    int len = len1 + len2;
    vector<int> a, b;

    // Tạo mảng chứa từng chữ số của s1 và s2
    for(int i = 0; i < len1; i++){
        a.push_back(s1[i] - '0');
    }
    for(int i = 0; i < len2; i++){
        b.push_back(s2[i] - '0');
    }

    int index = 0;
    vector<vector<int>> res(len2);

    // Nhân từng chữ số của s2 với toàn bộ s1
    for(int i = len2 - 1; i >= 0; i--){
        int nho = 0;
        int t = 0;
        
        // Điền số 0 vào các vị trí đầu của hàng kết quả
        while(t < index){
            res[index].push_back(0);
            t++;
        }

        // Nhân từng chữ số của s1 với s2[i]
        for(int j = len1 - 1; j >= 0; j--){
            int so = a[j] * b[i] + nho;
            res[index].push_back(so % 10);
            nho = so / 10;
        }

        // Nếu còn số nhớ thì thêm vào hàng hiện tại
        if(nho > 0){
            res[index].push_back(nho);
        }

        // Điền số 0 vào cuối hàng cho đủ độ dài
        while(res[index].size() < len){
            res[index].push_back(0);
        }

        // Đảo ngược từng hàng để sắp xếp đúng thứ tự
        reverse(res[index].begin(), res[index].end());
        
        index++;
    }

    int nho = 0;
    string ans = "";

    // Cộng các hàng lại với nhau
    for(int j = len - 1; j >= 0; j--){
        int so = nho;
        for(int i = 0; i < res.size(); i++){
            so += res[i][j];
        }
        ans = char(so % 10 + '0') + ans;
        nho = so / 10;
    }

    // Xử lý trường hợp còn số nhớ
    if(nho > 0) ans = char(nho + '0') + ans;

    // Xóa các số 0 đứng đầu kết quả
    while(ans.length() > 1 && ans[0] == '0') ans.erase(ans.begin());

    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << mul(s1, s2) << endl;
    }
}
