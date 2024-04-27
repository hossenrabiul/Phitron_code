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
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        map<int, int> mp;
        map<int, int> mp1;
        for (int i = 0; i < n; i++)
        {
            mp[a[i][n - 1]]++;
            mp1[a[i][n - 1]] = i;
        }
        for (auto x : mp1)
        {
            // cout << x.first << " " << x.second;
            cout << x.second;
            cout << endl;
        }
        int idx, val;
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                idx = x.first;
            }
            else
            {
                val = x.first;
            }
        }
        for (int i = 1; i < n; i++)
        {
            cout << a[mp1[idx]][i] << " ";
        }
        cout << val << endl;
    }
    return 0;
}