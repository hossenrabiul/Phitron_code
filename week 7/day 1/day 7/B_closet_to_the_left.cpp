#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n>>q;
    vector<int> a(n);
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int key;
        cin>>key;
        int l = 0,r = n-1,mid,idx = 0;
        while(l <= r)
        {
            mid = (l+r)/2;
            if(a[mid] <= key){
                idx = mid+1;
                l = mid + 1;
            } 
            else{
                r = mid - 1;
            }
        }
        cout << idx << endl;
    }

    return 0;
}