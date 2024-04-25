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

        for (auto it : mp)
        {
            mx = max(mx, it.second);
        }

        int cnt = 0, c = 0;
        int rem = n - mx;
        
        while (rem > 0)
        {
            c++;
            cnt += mx;
            rem -= mx;
            mx *= 2;
        }
        if (rem < 0)
        {
            cnt += rem;
        }
        cout << c + cnt << endl;
    }
    return 0;
}