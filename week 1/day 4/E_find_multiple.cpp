#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
            break;
        }
    }
    if (ans == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}