#include<bits/stdc++.h>
using namespace std; 

vector<int> adj[2001];
int n, m;
bool visited[2001];

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++cnt;
            dfs(i);
        }
    }
    cout << m - n + cnt;
}

/*
Số chu trình độc lập trong một đồ thị vô hướng là 
số lượng chu trình đơn không thể được tạo ra từ các chu trình còn lại, 
và bất kỳ chu trình nào trong đồ thị cũng có thể được tạo thành từ tổ hợp 
(gộp hoặc ghép) của các chu trình này.

𝐶=𝑚−𝑛+𝑘
Ứng dụng:
Dùng để đếm số chu trình tối đa có thể chọn không trùng cạnh.

Dùng trong thuật toán điện, mạng, thiết kế mạch, phân tích mạng...

Dùng trong bài toán bạn đang làm: số nhân viên tối đa có thể được phân công hành trình tiếp thị
​
 

*/