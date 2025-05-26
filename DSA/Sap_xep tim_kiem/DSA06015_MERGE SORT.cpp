#include<bits/stdc++.h>

using namespace std;

void combine(int a[], int l, int mid, int r){
    int i = l, j = mid + 1;
    vector<int> tmp;
    while (i <= mid && j <= r) {
        int nextValue;

        if (a[i] < a[j]) nextValue = a[i++];
        else nextValue = a[j++];

        tmp.push_back(nextValue);
    }

    while (i <= mid) tmp.push_back(a[i++]);
    while (j <= r) tmp.push_back(a[j++]);

    for (int i = 0; i < tmp.size(); i++){
        a[l + i] = tmp[i];
    }
}

void merge_sort(int a[], int l, int r){
    if(l < r){
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        combine(a, l, mid, r);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        merge_sort(a, 0, n - 1);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}