#include<bits/stdc++.h>

using namespace std;
// y : dealine, z: profit
struct Job{
    int x, y, z;
};

bool cmp(Job a, Job b){
    return a.y > b.y;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<Job> v;
        for(int i = 0; i < n; i++){
            int a, b, c; cin >> a >> b >> c;
            v.push_back({a, b, c});
        }
        sort(v.begin(), v.end(), cmp);
        priority_queue<int> q;
        int cnt = 0;
        int sum = 0;
        int index = 0;
        int cur_date = v[0].y;
        while(cur_date >= 1){
            while(index < n && v[index].y >= cur_date){
                q.push(v[index].z);
                ++index;
            }
            if(!q.empty()){
                ++cnt;
                sum += q.top();
                q.pop();
            }
            cur_date--;
        }
        cout << cnt << " " << sum << endl;
    }
}
/*
    test case

    12
    7 100 
    7 120
    7 90
    6 100
    6 50    
    5 70
    4 40 
    4 50 
    4 60
    3 10
    2 10
    1 5

    cur_date = 7;
    lặp đến khi nào dealine nhảy sang ngày khác{
        đẩy hết các profit của các ngày lớn hơn hoặc bằng currentDate và queue
    }
    lấy ra profit Max và nhảy sang ngày khác
    


*/