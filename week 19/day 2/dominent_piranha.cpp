#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int mx = INT_MIN;
        int ans = -1;
        for(int i = 0; i < n; i++){
            if(a[i] >= mx){
                mx = a[i];
                if(i > 0 && i < n - 1){
                    if(a[i] > a[i - 1] && a[i] > a[i + 1]){
                        ans = i + 1;
                    }
                    else if(a[i] > a[i - 1]){
                        ans = i + 1;
                    }
                    else if(a[i] > a[i + 1]){
                        ans = i + 1;
                    }
                }
                else if(i > 0){
                    if(a[i] > a[i - 1]){
                        ans = i + 1;
                    }
                }
                else if(i < n - 1){
                    if(a[i] > a[i + 1]){
                        ans = i + 1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}