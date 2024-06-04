#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll cho_a = 0, cho_b = 0, all = 0, ans = 0;
    for(ll i = 1; i <= n; i++){
        if(i % a == 0){
            cho_a++;
        }
        if(i % b == 0){
            cho_b++;
        }
        if(i % a == 0 && i % b == 0){
            all++;
        }
    }
    ans += (cho_a * p) + (cho_b * q);

    ans -= all * (p + q);
    
    ans += all * max(p, q);
    cout << ans << endl;
    return 0;
}