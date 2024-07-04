#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    map<ll, ll> d;
    for(ll i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        d[x]++;
        d[y + 1]--;
    }
    ll ans = 0, cnt = 0;
    for(auto [key, value] : d){
        cnt += value;
        ans = max(ans, cnt);
    }

    cout << ans << '\n';
    return 0;
}