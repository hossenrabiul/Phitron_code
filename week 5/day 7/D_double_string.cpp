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
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            string s = a[i];
            string a, b;
            int pos = 1;
            while (pos <= s.size())
            {
                a = s.substr(0, pos);
                b = s.substr(pos, s.size() - pos);
                pos++;
              
                int an = s.find(a);
                cout << an;

            }
        }
    }
    return 0;
}