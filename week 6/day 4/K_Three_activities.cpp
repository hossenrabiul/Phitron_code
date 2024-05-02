#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> va;
    vector<pair<int, int>> vb;
    vector<pair<int, int>> vc;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        va.push_back({a, i});
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vb.push_back({a, i});
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vc.push_back({a, i});
    }

    sort(va.begin(), va.end(), greater<>());
    sort(vb.begin(), vb.end(), greater<>());
    sort(vc.begin(), vc.end(), greater<>());

    int ans = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second)
                {
                    ans = max((va[i].first + vb[j].first + vc[k].first), ans);
                }
            }
        }
    }
    cout << ans;
    return 0;
}