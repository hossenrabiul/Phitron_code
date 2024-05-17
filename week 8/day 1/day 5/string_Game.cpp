#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t, p;
    cin>> t;
    cin >> p;
    int n = t.size();
    int m = p.size();
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    auto ok = [&](int mid)
    {                                     // Total complexity 0(2n log N)
        vector<bool> bad(n + 1);
        for(int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;                  // 0(N);
        }
        int j = 0;
        bool found = false;
        for(int i = 0; i < n; i++)
        {
            if(t[i] == p[j] && !bad[i + 1])
            {
                j++;
            }                                  // 0(N);
            if(j == m){
                found = true;
                break;
            }
        }
        return found;
        
    };
    int l = 0, r = n, mid, ans;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }                          // 0(log N)
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}