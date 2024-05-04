#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 0, r = 0;
        ll ans = 0;
        ll odd = 0;

        while (r < n)
        {
            if (a[r] % 2 == 1)
            {
                odd++;
            }                            
            if (r - l + 1 == k)
            {

                if (odd > 0)
                {
                    ans++;
                }

                if (a[l] % 2 == 1)
                {
                    odd--;
                }
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}