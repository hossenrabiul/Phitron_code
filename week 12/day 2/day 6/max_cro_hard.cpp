#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
tree_order_statistics_node_update>;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        pbds<long long> p;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        long long cnt = 0;
        for(long long i = n - 1; i >= 0; i--){
            cnt += p.order_of_key(a[i] + 1);
            p.insert(a[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}