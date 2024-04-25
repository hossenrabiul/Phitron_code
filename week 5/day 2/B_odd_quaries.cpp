#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            l--, r--;
            for (int i = l; i <= r; i++)
            {
                a[i] = k;
            }
            for (int s : a)
            {
                cout << s << " ";
            }
        }
    }
    return 0;
}