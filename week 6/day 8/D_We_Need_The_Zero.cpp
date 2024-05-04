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
        bool flag = false;
        for (int i = 0; i <= 256; i++)
        {
            vector<int> ans;
            for (int j = 0; j < n; j++)
            {
                int X = i ^ a[j];
                ans.push_back(X);
            }
            int XOR = 0;
            for (int x : ans)
            {
                XOR ^= x;
            }
            if (XOR == 0)
            {
                cout << i << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}