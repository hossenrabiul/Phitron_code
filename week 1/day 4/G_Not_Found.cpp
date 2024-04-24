#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<bool> v(26, false);
    char ans;
    bool flag = true;
    for (char s1 : s)
    {
        v[s1 - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == false)
        {
            ans = i + 'a';
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "None";
    }
    else
    {
        cout << ans;
    }
    return 0;
}