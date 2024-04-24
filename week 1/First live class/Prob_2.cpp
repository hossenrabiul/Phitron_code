#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    long long int ans = 0;
    while (l < n && r < m)
    {
        int cnt = 0, cnt1 = 0, cur;
        cur = a[l];
        while (a[l] == cur && l < n)
        {
            cnt++;
            l++;
        }
        while (cur > b[r] && r < m)
        {
            r++;
        }
        while (b[r] == cur && r < m)
        {
            cnt1++;
            r++;
        }
        ans += (1ll * cnt * cnt1);
    }
    return 0;
}