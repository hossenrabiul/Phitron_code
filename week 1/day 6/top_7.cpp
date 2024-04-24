#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mx = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > (i + 1))
        {
            flag = true;
            mx = max(mx, v[i] - (i + 1));
            
        }
    }
    if (flag == false)
    {
        cout << 0 << endl;
    }
    else
    {
        
        cout << mx;
    }

    return 0;
}