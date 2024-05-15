#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto ok = [&](long long mid)
        {
            long long cnt = 0;
            for(long long i = 0; i < n; i++)
            {
                cnt += (a[i] < mid ? (mid - a[i]) : 0);
                // if(a[i] < mid)
                // {
                //     cnt += mid - a[i];
                // }
            }
            return cnt <= x;
        };

        long long l = 1, r = 1e10, mid;
        long long ans = 0;

        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << ans << '\n';

    }
    return 0;
}