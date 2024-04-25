#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double t;
    cin >> t;
    while (t--)
    {
        
        long double n;
        cin >> n;
        vector<long double> a(n), b(n);
        long double sum = 0, sum1 = 0, mx = 0, mx1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
          
            if(a[i] == 0)
            {
                sum = 0;
            }
            else{
                sum++;
            }
            mx = max(mx, sum);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
           
            if(b[i] == 0)
            {
                sum1 = 0;
            }
            else{
                sum1++;
            }
            mx1 = max(mx1, sum1);
        }
     
        if(mx == mx1){
            cout << "Both" <<endl;
        }
        else if(mx > mx1){
            cout << "Om" <<endl;
        }
        else{
            cout << "Addy" << endl;
        }
    }
    return 0;
}