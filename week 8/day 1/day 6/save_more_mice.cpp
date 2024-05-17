#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        ll sum = 0,cnt = 0;

        for(int i = k - 1; i >= 0; i--){
            sum += (n - a[i]);
            if(sum < n){
                cnt++;
            }
            else{
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}