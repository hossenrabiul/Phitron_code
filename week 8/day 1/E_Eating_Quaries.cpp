#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), b(n);
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end(),greater<>());

        b[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            b[i] = a[i] + b[i - 1];
        }
        
        while(q--){
            
            ll x;
            cin >> x;
            
            auto it = lower_bound(b.begin(), b.end(), x);

            if(it == b.end()){
                cout << -1 << endl;
            }
            else{
                cout << it - b.begin() + 1 << endl;
            }
        
        }
    }
    return 0;
}