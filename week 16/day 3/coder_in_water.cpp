#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, cur = 0;
        bool ok = false;
        for(int i = 0; i < n; i++){
            if(s[i] == '#'){
                cnt = 0;
            }
            else{
                cnt++;
                cur++;
            }

            if(cnt == 3){
                ok = true;
            }
           
        }

        if(ok){
            cout << 2 << '\n';
        }
        else{
            cout << cur << '\n';
        }
    }
    return 0;
}
