#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    map<char, int> mp;
    for (char v : s)
    {
        mp[v]++;
    }
    for (auto v : mp)
    {
        if (k == 0)
            break;
        if (v.second % 2 == 1)
        {
            mp[v.first]--;
            k--;
        }
    }
    int odd_cnt = 0;
    int even_cnt = 0;
    for (auto v : mp)
    {
        if (v.second % 2 == 0)
        {
            even_cnt++;
        }
        else
        {
            odd_cnt++;
        }
    }
    if (odd_cnt == 0 || odd_cnt == 1)
    {
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}