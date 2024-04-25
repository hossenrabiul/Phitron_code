#include <bits/stdc++.h>
using namespace std;
void fun()
{
    long long n;
    cin >> n;
    bool flag = true;
    vector<long long> v(n);
    set<long long> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < (n / 2); i++)
    {
        if (v[i] != v[n - i - 1])
        {
            st.insert(v[i]);
            st.insert(v[n - i - 1]);
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {

        for (auto s : st)
        {
            int l = 0, r = n - 1;
            flag = true;
            while (l < r)
            {
                if (v[l] == v[r])
                {
                    l++;
                    r--;
                }
                else if (v[l] == s)
                {
                    l++;
                }
                else if (v[r] == s)
                {
                    r--;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "Yes" << endl;
                return;
            }
        }
        cout << "No" << endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}