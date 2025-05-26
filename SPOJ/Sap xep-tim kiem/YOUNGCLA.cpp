#include<bits/stdc++.h>
using namespace std;

struct Data{
    string name;
    string d, m, y;
    string ngaySinh;
};

bool cmp(Data a, Data b){
    return a.ngaySinh < b.ngaySinh;
}

int main(){
    int n; cin >> n;
    vector<Data> ds(n);
    for(int i = 0; i < n; i++){
        cin >> ds[i].name >> ds[i].d >> ds[i].m >> ds[i].y;
        if(ds[i].d.length() == 1){
            ds[i].d = "0" + ds[i].d;
        }
        if(ds[i].m.length() == 1){
            ds[i].m = "0" + ds[i].m;
        }
        ds[i].ngaySinh = ds[i].y + ds[i].m + ds[i].y;
    }
    sort(ds.begin(), ds.end(), cmp);
    cout << ds[ds.size() - 1].name << "\n" << ds[0].name;
}