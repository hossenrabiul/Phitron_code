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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll cnt = 0;
        bool ok = true, flag;
        for(ll i = 0; i < n; i++){
            ll mul = i + 2;
            if(a[i] % mul != 0){
                cnt++;
            }
            else{
                flag = false;
                for(ll j = 1; j <= cnt; j++){
                    if(a[i] % (mul - j) != 0){
                        cnt++;
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    ok = false;
                }
            }
        }

        if(ok){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}