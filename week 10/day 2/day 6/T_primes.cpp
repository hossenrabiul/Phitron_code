#include<bits/stdc++.h>
int n = 1e6;
using namespace std;
// bool is_prime(long long n){
//     if(n == 1){
//         return false;
//     }
//     for(long long i = 2; i * i <= n; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

bool is_perfectsqure(long long n){
    long long x = sqrtl(n);
    return x * x == n;
}
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> prime(n + 1, true);
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            for(int j = i + i; j <= n; j += i){
                prime[i] = false;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
    
       if(prime[sqrtl(a[i])] && is_perfectsqure(a[i])){
              cout << "YES" << endl;
       }
       else{
        cout << "NO" << endl;
       }
    }
    return 0;
}