#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int mx = 0;
        for(int i = 1; i < n; i++){
              mx = max((a[i] - a[i - 1]), mx);
        }
       
        int in_mx = max(a[0], mx);
        int sum = x - a[n - 1];
        int ans = max((sum * 2), in_mx);
        cout << ans << '\n'; 

    }
    return 0;
}