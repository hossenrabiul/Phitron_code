#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> q(m);
    for(int i = 0; i < m; i++){
        cin >> q[i];
        
        int l = 0, r = n-1, mid, idx;
        bool ok = false;
        while(l <= r){

            mid = (l + r) / 2;

            if(a[mid] < q[i]){
                idx = a[mid];
                l = mid + 1;
                ok = true;
            }
            else{
                r = mid - 1;
            }

        
        }
       
        auto it = upper_bound(a.begin(),a.end(),q[i]);
        
        if(it == a.end() && ok){
            cout << idx << " " << 'X' << endl;
        }
        else if(!ok && it != a.end()){
            cout << 'X' << " " << *it << endl;
        }
        else{
            cout << idx << " " << *it << endl;
        }
    }
    return 0;
}