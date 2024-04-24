#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    int freq1[26] = {0};
    int freq2[26] = {0};
    for (char c : s)
    {
        freq1[c - 'a']++;
    }
    int l = 0, r = 0, cnt = 0;
    int n = s.size();
    int window = p.size();

    while (r < n)
    {
        freq2[s[r] - 'a']++;
        if (r < window - 1)
        {
            r++;
        }
        else
        {
            bool flag = true;

            for (int i = 0; i < 26; i++)
            {
                if (freq1[i] != freq2[i])
                {
                    flag = false;
                }
            }
            if (flag)
                cnt++;
            freq2[s[l] - 'a']--;
            l++;
            r++;
        }
    }
    cout << cnt;
    return 0;
}