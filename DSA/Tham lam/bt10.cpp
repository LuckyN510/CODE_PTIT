#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

int main(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    priority_queue<int> q;
    int sum = 0;
    int index = 0;
    int cur_dl = v[0].first;
    while(cur_dl >= 1){
        while(index < n && v[index].first >= cur_dl){
            q.push(v[index].second);
            ++index;
        }
        if(!q.empty()){
            sum += q.top();
            q.pop();
        }
        cur_dl--;
    }
    cout << sum << endl;
}