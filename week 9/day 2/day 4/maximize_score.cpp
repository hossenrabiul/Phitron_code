#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int mn = INT_MAX, dif;
        mn = min(mn, abs(a[0] - a[1]));
       
        mn = min(mn, abs(a[n - 1] - a[n - 2]));
       
        for(int i = 1; i < n - 1; i++){
            dif = max(abs(a[i] -  a[i - 1]), abs(a[i] - a[i + 1]));
          
            mn = min(mn,dif);
            
        }
        cout << mn << endl;
    }
    
    return 0;
}