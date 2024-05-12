#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int T = t;
    while(q--){
        int x;
        cin >> x;

        int l = 0, r = n - 1, mid, idx;
        bool ok = false;

        while(l <= r){

            mid = (l + r) / 2;
            if(a[mid] == x){
                idx = mid;
                r = mid - 1;
                ok = true;
            }
            else if(a[mid] > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
       
        cout << "Case#" << " " << T++ << ':' << endl;
        if(ok){
            cout << x << " " << "found at"  << " " << idx + 1 << endl;
        }
        else{
            cout << x << " " << "Not found" << endl;
        }
    }
 }
    return 0;
}