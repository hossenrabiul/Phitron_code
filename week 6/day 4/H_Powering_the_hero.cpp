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
        priority_queue<ll> q;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                q.push(a[i]);
            }
            else
            {
                if (!q.empty())
                {
                    ans += q.top();
                    q.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}