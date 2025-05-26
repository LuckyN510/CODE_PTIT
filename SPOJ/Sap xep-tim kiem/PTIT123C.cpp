#include <bits/stdc++.h>

using namespace std;

struct Data {
    int cs, gia;
};

bool cmp(Data a, Data b) {
    if (a.gia == b.gia) {
        return a.cs < b.cs;
    }
    return a.gia < b.gia;
}

bool cmp1(Data a, Data b) {
    return a.cs < b.cs;
}

bool cmp2(Data a, Data b) {
    return a.cs > b.cs;
}

int main() {
    int cnt = 0;
    while (true) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        if (n == 0 && k1 == 0 && k2 == 0) {
            break;
        }
        ++cnt;
        
        vector<Data> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].gia;
            a[i].cs = i + 1;
        }
        sort(a.begin(), a.end(), cmp);
        sort(a.begin(), a.begin() + k1, cmp1);
        sort(a.end() - k2, a.end(), cmp2);
		for (int i = 0; i < n; i++) {
			cout << a[i].gia << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i].cs << " ";
		}
        cout << "\nCase " << cnt << endl;
        for (int i = 0; i < k1; i++) {
            cout << a[i].cs << " ";
        }
        cout << endl;
        for (int i = n - k2; i < n; i++) {
            cout << a[i].cs << " ";
        }
        cout << endl;
    }
    return 0;
}
