#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1), b(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }

        int l = 1, r = 2, ans = 0;
        int idxL = 0, idxR = 0;
        while(r <= n){
            if(a[l] == b[l]){
                l++;
            }
            else if(a[r] != b[r]){
               
                   idxL = l;
                   idxR = r;
            }
            r++;

        }
        
        while(idxL > 1){
            if(b[idxL] >= b[idxL - 1]){
                idxL--;
            }
            else{
                break;
            }
        }
        while(idxR < n){
            if(b[idxR] <= b[idxR + 1]){
                idxR++;
            }
            else{
                break;
            }
        }
        cout << idxL << " " << idxR << '\n';
    }
 
    return 0;
}