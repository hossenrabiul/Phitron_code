#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, cur = a[l];
        while (a[l] == cur && l < n)
        {
            cnt1++;
            l++;
        }
        while (cur > b[r] && r < m)
        {
            r++;
        }
        while (b[r] == cur && r < m)
        {
            cnt2++;
            r++;
        }
        ans += (1ll * cnt1 * cnt2);
    }
    cout << ans;
    return 0;

    
}