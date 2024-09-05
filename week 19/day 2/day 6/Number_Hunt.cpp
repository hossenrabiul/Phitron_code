#include<bits/stdc++.h>
using namespace std;
bool prime(long long x){
    for(long long i = 2; i * i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        vector<long long> v(2);
        int i = 0;
        if(x == 1 || x == 2){
            cout << 6 << endl;
            continue;
        }
        while(true){
            if(i == 2){
                break;
            }
            if(prime(x)){
                v[i] = x;
                i++;
            }
            x++;
        }
        long long ans = v[0] * v[1];
        
        cout << ans << endl;
    }
    return 0;
}