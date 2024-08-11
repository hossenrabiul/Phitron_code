#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n, k, h;
        cin >> n >> k >> h;
        long long cnt = 0;
        for(long long i = 1; i <= n; i++){
                if(i >= h){
                    cnt += n;
                }
                else if(i > abs(h - k)){
                    cnt += i - 1;
                }
                else if(i >= abs(h / 2 - 1)){
                    cnt += i - 2;
                }
                else{
                    if(i * k >= h){
                        cnt += i - 3;
                    }
                }
        }

        cout << cnt << '\n';
    }
    return 0;
}