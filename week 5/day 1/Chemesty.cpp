#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int odd = 0;
        for (auto it : mp)
        {
            if (it.second % 2 == 1)
            {
                odd++;
            }
        }
        if (odd > k + 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}