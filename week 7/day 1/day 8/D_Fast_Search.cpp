#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int k;
    cin >> k;
    while(k--)
    {
        ll i, j;
        cin >> i >> j;
        
        int l = 0,r = n-1;

        ll ans;
        
        while(a[l] < i && l < r)
        {
            l++;
        }
        while(a[r] > j && l < r){
            r--;
        }
        ans = r - l;
        if(ans){
            cout << ans+1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}