#include<bits/stdc++.h>

using namespace std;

vector<string> s;
int n;
int x[101];
bool visited[101];

int dem(int i){
    string tmp1 = s[x[i - 1]], tmp2 = s[x[i]];
    int index1 = 0, index2 = 0;
    int cnt = 0;
    while(index1 < tmp1.length() && index2 < tmp2.length()){
        if(tmp1[index1] == tmp2[index2]){
            ++index1;
            ++index2;
            ++cnt;
        }
        else if(tmp1[index1] < tmp2[index2]){
            ++index1;
        }
        else{
            ++index2;
        }
    }
    return cnt;
}

int minx = 1e9;

void Try(int i, int cnt){
    for(int j = 1; j <= n; j++){
        if(!visited[j]){
            x[i] = j;
            visited[j] = true;
            int tmp = dem(i);
            cout << tmp << endl;
            if(i == n){
                minx = min(minx, cnt + tmp);
            }
            else{
                Try(i + 1, cnt + tmp);
            }
            visited[j] = false;
        }
    }
}

int main(){
    cin >> n;
    s.resize(n + 1);
    for(int i = 1; i <= s.size(); i++){
        cin >> s[i];
    }
    Try(1, 0);
    cout << minx;

}