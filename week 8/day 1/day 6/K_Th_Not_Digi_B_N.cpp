#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
         int n, k;
         cin >> n >> k;
         auto ok = [&](int mid){

               return (mid - (mid / n)) >= k;
          };
          
          int l = 1, r = 2e9, mid, ans = 0;
          while(l <= r)
          {
                 mid = l + (r - l) / 2;
                 if(ok(mid)){
                  ans = mid;                   // Total complexity 0(log 2e9);
                  r = mid - 1;
                }
                else{
                     l = mid + 1;
                }
           }
              cout << ans << endl;
    }
    return 0;
}