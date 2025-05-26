#include<bits/stdc++.h>

using namespace std;

vector<string> v;
int n;
int x[1001];
bool visited[1001];
int minn = 1e9;

int dem(int i){
    int cnt = 0;
    if(i == 1) return 0;
    string s1 = v[x[i - 1]], s2 = v[x[i]];
    int index1 = 0, index2 = 0;
    while(index1 < s1.length() && index2 < s2.length()){
        if(s1[index1] == s2[index2]){
            ++cnt;
            ++index1;
            ++index2;
        }
        else if(s1[index1] < s2[index2]){
            ++index1;
        }
        else{
            ++index2;
        }
    }
    return cnt;
}

void Try(int i, int cnt){
    for(int j = 0; j < n; j++){
        if(!visited[j]){
            x[i] = j;
            visited[j] = true;
            int tmp = dem(i); // đếm số kí tự lặp tại cấu hình thứ i
            if(i == n){
                minn = min(minn, cnt + tmp);
            }
            else Try(i + 1, cnt + tmp);
            visited[j] = false;
        }
    }
}

int main(){
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    Try(1, 0);
    cout << minn << endl;
}