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
    int r = 0, l = 0, ans = 0;
    while (r < m)
    {
        while (b[r] > a[l] && l < n)
        {
            l++;
            ans++;
        }
        r++;
        cout << ans << " ";
    }
    return 0;
}