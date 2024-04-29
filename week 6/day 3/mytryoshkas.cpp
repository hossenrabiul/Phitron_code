#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
       
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin(), a.end());
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {

            ll m = a[i];
            while (mp[m] != 0)
            {
                ans++;

                while (mp[m] > 0)
                {
                    mp[m]--;
                    m++;
                }
            }
        }

        cout << ans;
    }
    return 0;
}