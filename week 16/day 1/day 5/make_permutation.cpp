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
        bool freq[n + 1] = {false};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]] = true;
        }

        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(freq[i] == false){
                cnt++;
            }
        }

        cout << cnt;
    }
    return 0;
}