#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // sort(a.begin(),a.end(),greater<>());

        b[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            b[i] = a[i] + b[i - 1];
        }
        int m;
        cin >> m;
        vector<int> q(m);
        for(int i = 0; i < m; i++)
        {
            cin >> q[i];
    
            auto it = lower_bound(b.begin(), b.end(), q[i]);

            if(it == b.end()){
                cout << -1 << endl;
            }
            else{
                cout << it - b.begin() + 1 << endl;
            }
        
        }
    
    return 0;
}