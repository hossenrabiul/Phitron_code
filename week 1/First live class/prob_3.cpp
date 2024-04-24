#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    long long sum = 0, ans = 0;
    while (r < n)
    {
        sum += a[r];
        if (r - l + 1 == k)
        {
            ans = max(sum, ans);
            sum -= a[l];
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    cout << ans;
    return 0;
}