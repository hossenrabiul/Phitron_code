#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<ll, ll> > a;
        for(int i  = 0; i < n; i++){
            ll x, y;
            cin >> x >> y;
            a.push_back({x, y});
        }

        ll win_s = a[0].first;
        ll win_e = a[0].second;

        auto ok = [&](ll w){
            for(int i = 1; i < a.size(); i++){
                if(a[i].first >= win_s && a[i].second >= win_e){
                    return false;
                }
                if(a[i].second >= win_e){
                    // cout << 1 << " ";
                    if(a[i].first >= w){
                        // cout << 2;
                        return false;
                    }
                }
            }

            return true;

        };

        ll l = 1, r = win_s, mid, ans = 0;

        while(l <= r){
            mid = l + (r - l) / 2;
            // cout << mid << " ";
            if(ok(mid)){
                ans = mid;
                break;
            }
            else{
                l = mid + 1;
            }

        }

        if(ans == 0){
            cout << -1 << '\n';
        }
        else{
            cout << ans << '\n';
        }
        

    }
    return 0;
}