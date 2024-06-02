#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b){
//     return __gcd(a, b);
// }
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0;
    bool ok = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] != 1){
            ok = false;
        }
    }
    
    if(ok){
        cout << 1 << endl;
    }
    else{
        for(int i = 0; i < n;i++){
            ok = false;
           for(int j = 2; j * j <= a[i]; j++){
                if(a[i] % j == 0){
                    ok = true;
                }
           }
           if(ok){
              cnt++;
           }
        }

        cout << cnt << endl;
    }
    

    // int ans = 0;
    // vector<int> v;
    // for(int i = 0; i < n;i++){
    //     for(int j = 1; j * j <= a[i]; j++){
    //         if(a[i] % j == 0){
    //             v.push_back(j);
    //             v.push_back(a[i] / j);
    //         }
    //     }
        
    // }

    
    
    
    
    return 0;
}