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

        string ans = "emow";
        string ans1;

        vector<char> v;
        set<char> sa;

        for (int i = 0; i < n; i++)
        {
            v.push_back(tolower(s[i]));
        }
        for (char c : v)
        {
            sa.insert(c);
        }
        for (auto s1 : sa)
        {
            ans1.push_back(s1);
        }
        if (ans == ans1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}