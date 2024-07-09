#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        int sum = 0;
        if(k > n){
            cout << -1 << '\n';
        }
        else if(k > x + 1){
            cout << -1 << '\n';
        }
        else{
            int dif = (n - k);
            for(int i = 1; i < k; i++){
                sum += i;
            }
            for(int i = 1; i <= dif; i++){
                if(k != x){
                    sum += x;
                }
                else{
                    sum += x - 1;
                }
            }
            cout << sum << '\n';

        }

        
    }
    return 0;
}