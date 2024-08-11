#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll machi = a[0];
        vector<ll> v;
        for(ll i = 0; i < n; i++){
            if(a[i] >= machi){
                machi = a[i];
            }
            else{
                ll dif = machi - a[i];
                v.push_back(dif);
            }
        }
        sort(v.begin(), v.end());
        ll size = v.size();
        ll ans = 0;
        ll va = 0;
        for(auto val : v){
            ans += (val - va) * (size + 1);
            va = val;
            size--;
        }
        cout << ans << '\n';
    }
    return 0;
}