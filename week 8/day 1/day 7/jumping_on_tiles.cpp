#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] > s[s.size() - 1])
        {
            cout << (s[0] - 'a' + 1) - (s[s.size() - 1] - 'a' + 1);
        }
        else{
            cout << (s[s.size() - 1] - 'a' + 1) - (s[0] - 'a' + 1);
        }
    }
    return 0;
}