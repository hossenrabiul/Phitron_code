#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<int,int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        if(mp.size() > 1){
            if(mp.size() > 2){
                cout << "Yes" << endl;
            }
            else{
                bool ok = true;
                for(auto v : mp){
                    if(v.second == 1){
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
        }
        else{
            cout << "No" << endl;
        }
        
    }
    return 0;
}