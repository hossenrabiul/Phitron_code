#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        ll cnt = 0;
        for(int i = 0; i < n; i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(s[i] != st.top()){
                    st.pop();
                    cnt++;
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        if(cnt % 2 == 1)
        {
            cout << "Zlatan" << endl;
        }
        else{
            cout << "Ramos" << endl;
        }
    }
    return 0;
}