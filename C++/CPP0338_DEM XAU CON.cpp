#include<bits/stdc++.h>

using namespace std;

int soXauCon(string s, int k)
{
    int len = s.length();
    int res = 0; // đếm số xâu con có k kí tự khác nhau
    for(int i = 0; i < len; i++)
    {
        // đếm các kí tự khác nhau
        int distin_count = 0;
        memset(cnt, 0, sizeof(cnt));
        for(int j = i; j < len; j++)
        {
            // nếu kí tự chưa đc duyệt qua thì tăng distin_count
            if(cnt[s[j] - 'a'] == 0)
            {
                distin_count++;
            }
            // nếu đã xuất hiện thì tăng tần suất kí tự lên
            cnt[s[j] - 'a']++;
            // nếu distin_count == k thì tăng res lên
            if(distin_count == k)
            {
                ++res;
            }
            if(distin_count > k)
            {
                break;
            }
        }
    }
    return res;
}
int main()
{
    int t; cin >> t;
    scanf("\n");
    while(t--)
    {
        string s; 
        int k; 
        cin >> s >> k;
        cout << soXauCon(s, k) << endl;
    }
}

