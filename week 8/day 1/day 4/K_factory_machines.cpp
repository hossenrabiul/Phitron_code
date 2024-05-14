#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    auto ok = [&] (long long m){
        long long Total = 0;
        for(int i = 0; i < n; i++){
            Total += (m / a[i]);
            if(Total >= t){
                return true;
            }
        }
        return false;
    };

    long long l = 1, r = 1e18, mid, ans;

    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}