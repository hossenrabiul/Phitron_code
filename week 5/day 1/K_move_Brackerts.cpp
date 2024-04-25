#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                if (st.empty())
                {
                    cnt++;
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}