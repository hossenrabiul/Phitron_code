#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long And = n;
        long long cnt;
        for (int i = n - 1; i >= 1; i--)
        {
            And &= i;

            if (And == 0)
            {
                cnt = i;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}