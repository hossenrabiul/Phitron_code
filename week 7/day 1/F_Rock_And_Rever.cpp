#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[__lg(x)]++;
        }
        long long ans = 0;
        for (auto x : cnt)
        {
            ans += (1ll * x.second * (x.second - 1)) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}