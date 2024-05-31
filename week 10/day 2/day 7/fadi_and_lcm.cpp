#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return __gcd(a, b);
}
int main()
{
    long long x;
    cin >> x;
    int ans1,ans2,sum;
    for(int i = 1; i < x ; i++){
        for(int j = i + 1; j <= x; j++){
            sum = ((i * j) / gcd(i, j));
            if(sum == x){
                ans1 = i;
                ans2 = j;
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}