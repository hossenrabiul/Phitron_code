#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string ans = "meow";
    cin >> t;
    while (t--)
    {
        int n;
        string s, ans1;

        cin >> n >> s;
        list<char> l;
        for (char c : s)
        {
            l.push_back(tolower(c));
        }

        l.unique();
        for (char a : l)
        {
            ans1.push_back(a);
        }
        if (ans == ans1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}