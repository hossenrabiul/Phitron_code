#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i] % m]++;
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
     
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int re = (b[i] % m);
            int y = ((m - re) % m);
            cnt += mp[y];
        }
        cout << cnt << '\n';
    }
    return 0;
}