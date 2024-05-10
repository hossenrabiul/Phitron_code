#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n >> k;
    vector<int> a(n);
    for(int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    while(k--)
    {
        int key;
        cin >> key;

        int l = 0,r = n-1,mid;
        bool ok = false;
        while(l <= r)
        {
            mid = (l+r)/2;
            if(a[mid] == key)
            {
                 ok = true;
                 break;
            }
            else if(key < a[mid])
            {
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }

        if(ok)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}