#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> v;
    int N = n;
    if(n % 2 == 1){
        N--;
    }
    for(int i = N - 1; i >= 0; i -= 2){
        // cout << a[i] << " ";
        v.push_back(a[i]);
    }

    for(int i = 0; i < n; i += 2){
        // cout << a[i] << " ";
        v.push_back(a[i]);
    }

    for(auto val : v){
        cout << val << " ";
    }

    return 0;
}