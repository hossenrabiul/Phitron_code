#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int mx = 2000005;
    vector<int> a(mx), b;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y + 1]--;
    }
    for(int i = 1; i < mx; i++){
        a[i] = a[i] + a[i - 1];
        if(a[i] >= 2){
            b.push_back(a[i]);
        }

    }
 
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        for(int j = x; j <= y; j++){
            if(a[j] >= 2){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    for(int v : b){
        // cout << v << " ";
        
    }
    return 0;
}