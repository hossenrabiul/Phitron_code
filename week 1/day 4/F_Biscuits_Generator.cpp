#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int total = c + 0.5;
    int ans = 0;
    int val = a;
    while (val <= total)
    {
        ans = ans + b;
        val = val + a;
    }
    cout << ans << endl;
    return 0;
}