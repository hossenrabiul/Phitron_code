#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                cnt++;
            }
        }
        if(cnt == 0){
            cout << cnt << endl;
        }
        else if(cnt == 1){
            cout << "11" << endl;
        }
        else if(s[0] == '1' && s[1] == '1' && s[2] == '1' && s[3] == '1'){
            cout << "441"  << endl;
        }
        else if(s[0] == '1' && s[1] == '1' && s[2] == '1'){
            cout << "231" << endl;
        }
        else if((s[0] == '1' && s[1] == '1') || (s[2] == '1' && s[3] == '1')){
            cout << "21" << endl;
        }
        else if((s[0] == '1' && s[2] == '1') || (s[0] == '1' && s[3] == '1') || (s[1] == '1' && s[3] == '1')){
            cout << "121" << endl;
        }
        else if(s[1] == '1' && s[2] == '1'){
            cout << "121" << endl;
        }
    }
    return 0;
}