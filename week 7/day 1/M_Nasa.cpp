#include <bits/stdc++.h>
using namespace std;
const int maxN = (1 << 15);
vector<int> all_palindrome;
void mark_palindrome()
{
    for (int i = 0; i < 30; i++)
    {
        string s = to_string(i);
        cout << s << " ";
        int len = s.length();
        bool ok = true;
        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] != s[len - i - 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            all_palindrome.push_back(i);
        }
    }
}
int main()
{
    mark_palindrome();
    // for (auto x : all_palindrome)
    // {
    //     cout << x << " ";
    // }
    return 0;
}