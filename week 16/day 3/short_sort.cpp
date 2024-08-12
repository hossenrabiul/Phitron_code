#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == 'b'){
            if(s[1] == 'a'){
                cout << "Yes" << '\n';
            }
            else{
                 cout << "No" << '\n';
            }
        }
        else if(s[0] == 'c'){
            if(s[2] == 'a'){
                 cout << "Yes" << '\n';
            }
            else{
                 cout << "No" << '\n';
            }
        }
        else if(s[1] == 'a'){
            if(s[0] == 'b'){
                cout << "Yes" << '\n';
            }
            else{
                 cout << "No" << '\n';
            }
        }
        else if(s[1] == 'c'){
            if(s[2] == 'b'){
                cout << "Yes" << '\n';
            }
            else{
                 cout << "No" << '\n';
            }
        }
        else if(s[2] == 'b'){
            if(s[1] == 'c'){
                cout << "Yes" << '\n';
            }
            else{
                 cout << "No" << '\n';
            }
        }
        else if(s[2] == 'a'){
            if(s[0] == 'c'){
                cout << "Yes" << '\n';
            }
            else{
                 cout << "No" << '\n';
            }
        }
        else{
            cout << "Yes" << '\n';
        }

    }
    return 0;
}