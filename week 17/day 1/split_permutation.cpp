#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l = 1, r = n;
        while(l <= r){
            if(l == r){
                cout << l;
            }
            else{
                cout << r << " " << l << " ";
            }
            l++, r--;  
        }
        cout << '\n';
    }
    return 0;
}