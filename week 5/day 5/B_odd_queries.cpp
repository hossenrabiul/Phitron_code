#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n), pre(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long bad, minus, ans, sum;
            l--;
            r--;
            sum = (r - l + 1) * k;
            if (l == 0)
            {
                bad = pre[n - 1] - pre[r];
            }
            else
            {
                minus = pre[r] - pre[l - 1];
                bad = pre[n - 1] - minus;
            }
            ans = sum + bad;
            if (ans % 2 == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}