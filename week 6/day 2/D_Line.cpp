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
        string s;
        cin >> s;
        ll change = 0;
        ll total = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll L = i;
            ll R = n - i - 1;

            if (s[i] == 'L')
            {
                if (R > L) 
                {
                    change++;
                    total += R;
                    v.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
            else if (s[i] == 'R')
            {
                if (L > R)
                {
                    change++;
                    total += L;
                    v.push_back(L - R);
                }
                else
                {
                    total += R;
                }
            }
        }
        vector<ll> ans(n + 1);
        for (int i = change; i <= n; i++)
        {
            ans[i] = total;
        }
          
        sort(v.begin(), v.end(), greater<ll>());

        for (int i = change - 1; i >= 1; i--)
        {

            total -= v.back();
            v.pop_back();
            ans[i] = total;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}