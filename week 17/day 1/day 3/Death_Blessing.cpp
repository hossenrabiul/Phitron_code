#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        long long ans = 0;
        int mx = INT_MIN;
        int val = 0;
      
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ans += a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            ans += b[i];
            if(b[i] > mx){
                mx = b[i];
                val = b[i];
            }
        }
        ans -= val;
        if(n == 1 || n == 2){
            if(n == 1){
                cout << a[0] << '\n';
            }
            else{
                long long sum_ans = a[0] + a[1];
                if(b[0] > b[1]){
                    sum_ans += b[1];
                }
                else{
                    sum_ans += b[0];
                }

                cout << sum_ans << '\n';
            }
        }
        else{
            cout << ans << '\n';
        }
    }
    return 0;
}