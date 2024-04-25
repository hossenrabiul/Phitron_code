#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto s : mp)
    {
        cout << s.first << " " << s.second;
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 1; j < a[i].size(); j++)
        {
            string s1;
            string s2;

            for (int k = 0; k < j; k++)
            {
                s1 += a[i][k];
            }
            for (int k = j; k < a[i].size(); k++)
            {
                s2 += a[i][k];
            }
            if (mp[s1] > 0 && mp[s2] > 0)
            {
                flag = true;
            }
        }
        cout << flag;
    }
    return 0;
}