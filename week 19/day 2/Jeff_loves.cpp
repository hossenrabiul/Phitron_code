#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        for(int i = 0; i <= 17; i++){
            int power = pow(2, i);
            if(power == x){
                cout << 0 << endl;
                break;
            }
            else if(power > x){
                int sum = power - x;
                cout << x - sum << endl;
                break;
            }
        }
    }
    return 0;
}