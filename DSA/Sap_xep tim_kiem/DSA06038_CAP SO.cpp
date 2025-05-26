#include <bits/stdc++.h>
using namespace std;

int countValidPairs(vector<int>& A) {
    int n = A.size();
    vector<int> odd_prefix(n + 1, 0);

    // Xây dựng mảng prefix để kiểm tra nhanh số lẻ trong khoảng [i+1, j-1]
    for (int i = 0; i < n; i++) {
        odd_prefix[i + 1] = odd_prefix[i] + (A[i] % 2 != 0);
    }

    int count = 0;

    // Duyệt tất cả các cặp (i, j)
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) continue; // Bỏ qua nếu A[i] là số lẻ

        for (int j = i + 1; j < n; j++) {
            if (A[j] % 2 != 0) continue; // Bỏ qua nếu A[j] là số lẻ
            if (A[i] <= A[j]) continue;  // Điều kiện A[i] > A[j]

            // Kiểm tra có số lẻ nào trong khoảng [i+1, j-1]
            if (odd_prefix[j] - odd_prefix[i + 1] > 0) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    cout << countValidPairs(A) << endl;
    return 0;
}
