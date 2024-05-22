#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
                if(a[i] < b[i]){
                    ok = false;
                    break;
                }
        }
        if(ok){
            int com = a[0] - b[0];
            for(int i = 0; i < n; i++){
                    if(a[i] -  b[i] != com && b[i] != 0){
                        ok = false;
                    }
            }
            if(ok){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}