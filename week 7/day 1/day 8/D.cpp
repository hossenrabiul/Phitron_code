#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll k;
    cin >> k;
    while(k--)
    {
        ll i,j;
        cin >> i >> j;

        auto it = lower_bound(a.begin(),a.end(),i);
        auto it1 = upper_bound(a.begin(),a.end(),j);
        ll sum1 = it - a.begin();
        ll sum2 = it1 - a.begin();
        cout << sum1 << " " << sum2 << endl;
       
        // cout << sum2 - sum1 << endl;
    }
    return 0;
}