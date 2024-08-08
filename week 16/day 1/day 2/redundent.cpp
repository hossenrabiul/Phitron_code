#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> mp;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = INT_MAX;
        for(auto an : mp){
            ans = min(ans, an.first * (n - an.second));
        }

        cout << min(ans, n) << '\n';

    }
    return 0;
}