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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int mx = 0;
        int idx;
        for (auto it : mp)
        {
            if (it.second > mx)
            {
                mx = it.second;
                idx = it.first;
            }
            cout << it.first << " " << it.second << endl;
        }
        // cout << idx << endl;
        int l = 0, r = n - 1;
        bool flag = true;
        while (l <= r)
        {
            if (a[l] == a[r])
            {
                l++;
                r--;
            }
            else if (a[l] == a[idx])
            {
                l++;
            }
            else if (a[r] == a[idx])
            {
                r--;
            }
            else
            {
                flag = false;
                break;
            }
        }
        // if (flag)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}