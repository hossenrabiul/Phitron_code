#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int ans = 0;
    while (a <= b)
    {
        ans++;
        a = a * 2;
    }
    cout << ans;
    return 0;
}