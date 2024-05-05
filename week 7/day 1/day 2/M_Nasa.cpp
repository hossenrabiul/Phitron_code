#include <bits/stdc++.h>
using namespace std;
const int maxN = (1 << 15);
vector<int> all_palindrome;
void mark_palindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
    
        int len = s.length();
        bool ok = true;
        for (int j = 0; j < len / 2; j++)
        {
            if (s[j] != s[len - j - 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            all_palindrome.push_back(i);
        }
    }
}
int main()
{
    mark_palindrome();
   
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> cnt(maxN), a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }
        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_palindrome.size(); j++)
            {
                int curr = a[i] ^ all_palindrome[j];
                ans += cnt[curr];
            }
        }

        cout << ans / 2 << endl;
    }
    return 0;
}