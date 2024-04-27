#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        vector<pair<int, int>> pr = {{1, -1}, {-1, -1}, {1, 1}, {-1, 1}};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                int ci = i;
                int cj = j;
                while (ci < n && cj < m && ci >= 0 && cj >= 0)
                {
                    sum += a[ci][cj];
                    ci += pr[0].first;
                    cj += pr[0].second;
                }
                ci = i;
                cj = j;
                while (ci < n && cj < m && ci >= 0 && cj >= 0)
                {
                    sum += a[ci][cj];
                    ci += pr[1].first;
                    cj += pr[1].second;
                }
                ci = i;
                cj = j;
                while (ci < n && cj < m && ci >= 0 && cj >= 0)
                {
                    sum += a[ci][cj];
                    ci += pr[2].first;
                    cj += pr[2].second;
                }
                ci = i;
                cj = j;
                while (ci < n && cj < m && ci >= 0 && cj >= 0)
                {
                    sum += a[ci][cj];
                    ci += pr[3].first;
                    cj += pr[3].second;
                }
                sum -= a[i][j];
                sum -= a[i][j];
                sum -= a[i][j];
                mx = max(mx, sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}