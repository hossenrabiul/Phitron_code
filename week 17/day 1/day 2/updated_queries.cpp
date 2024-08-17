#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> a(m);
        set<int> st;
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            st.insert(a[i]);
        }

        string c;
        cin >> c;

        sort(c.begin(), c.end());
        int i = 0;
        for(auto v : st){
            v--;
            s[v] = c[i];
            i++;
        }
        
        cout << s;

        cout << '\n';

    }
    return 0;
}