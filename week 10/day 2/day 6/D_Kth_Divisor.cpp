#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> all_divisor;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            all_divisor.push_back(i);
        }
    }
    if(k <= all_divisor.size()){
        cout << all_divisor[k - 1];
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}