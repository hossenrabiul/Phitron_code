#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans;
    if (a == b)
    {
        ans = (a + b);
    }
    else if (a > b)
    {
        ans = (a + a) - 1;
    }
    else
    {
        ans = (b + b) - 1;
    }
    cout << ans;
    return 0;
}