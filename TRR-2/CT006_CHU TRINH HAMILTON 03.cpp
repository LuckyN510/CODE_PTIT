#include<bits/stdc++.h>

using namespace std;

const int maxn = 101;
vector<vector<int>> a(maxn, vector<int> (maxn));
vector<bool> visited(maxn, false);
vector<vector<int>> adj(maxn);
int n, m, s;
vector<int> path;
vector<int> res;
int MIN = 1e9;

void Hamilton(int i, int sum){
    for(int j = 1; j <= n; j++){
        if(!visited[j] && a[path[i - 1]][j] && a[path[i - 1]][j] != 10000){
            visited[j] = true;
            path.push_back(j);
            sum += a[path[i - 1]][j];
            if(i == n){
                if(a[j][path[1]]){
                    path.push_back(path[1]);
                    sum += a[j][path[1]];
                    if(sum < MIN){
                        MIN = sum;
                        res = path;
                    }
                    path.pop_back();
                    sum -= a[j][path[1]];
                }
            }
            else{
                Hamilton(i + 1, sum);
            }
            visited[j] = false;
            sum -= a[path[i - 1]][j];
            path.pop_back();
        }
    }
}

int main(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    path.push_back(0);
    path.push_back(s);
    visited[s] = true;
    Hamilton(2, 0);
    if(res.size() > 0){
        cout << MIN << endl;
        for(int i = 1; i < res.size(); i++){
            cout << res[i] << " ";
        }   
    }
    else{
        cout << "0\n";
    }
}