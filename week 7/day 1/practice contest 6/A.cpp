#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int x, y;
    cin >> x >> y;

    int bones = n * x;
    int blood = m * y;
    
    cout << bones + blood;
    return 0;
}