#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, r = 0;
        ll ans = 0;
        while (r < n)
        {
            if (a[r] <= q)
            {
                if (r - l + 1 >= k)
                {
                    ans += (r - l + 1) - k + 1;
                }

                r++;
            }
            else
            {
                r++;
                l = r;
            }
        }
        cout << ans << endl;
    }
    return 0;
}