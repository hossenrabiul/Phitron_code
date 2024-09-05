#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> bits(33, 0);
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
       
        ll o = 0;
        for(ll i = 0; i < n; i++){
            ll val = a[i];
            o |= val;
            for(ll j = 0; j < 33; j++){
                if(val & (1 << j)){
                    bits[j]++;
                }
            }
        }
        if(o & (o + 1) == 0){
            cout << 0 << '\n';
            return 0;
        }
        ll id = 0;
        for(ll i = 0; i < 33; i++){
            if(bits[i] == 0){
                id = i;
                break;
            }
        }

        ll mx = (1 << id);
        // sort(a.rbegin(), a.rend());
        for(ll i = 0; i < n; i++){
            if(a[i] >= mx){
                ans++;
            }
            // else{
            //     break;
            // }
        }
        cout << ans << endl;
        
       
    }
 
    return 0;
}