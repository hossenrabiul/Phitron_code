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
        int mn = INT_MAX, idx;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < mn){
                mn = a[i];
                idx = i;
            }
        }
        a[idx]++;
        int sum = 1;
        for(int i = 0; i < n; i++){
            sum *= a[i];
        }
        cout << sum << '\n';

    }
    return 0;
}