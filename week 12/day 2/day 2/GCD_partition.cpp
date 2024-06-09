#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return __gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0, sum1 = 0, ans = 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        for(int i = n - 1; i >= 1; i--){
            sum -= a[i];
            sum1 += a[i];
            ans = max(ans, gcd(sum, sum1));
        }
        cout << ans << endl;
    }
    return 0;
}