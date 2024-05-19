#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<int> v;
        int val;
        int si = s[0] - 'a' + 1;
        int sj = s[n - 1] - 'a' + 1;
        if(s[0] > s[n - 1]){
            
            val = s[0] - 'a';
            while(val >= s[n - 1] - 'a')
            {
                for(int i = 0; i < n; i++){
                   if(s[i] - 'a' == val){
                     v.push_back(i);
                    }
                } 
                val--;
            }
            
        }
        else{
            val = s[0] - 'a';
            while(val <= s[n - 1] - 'a'){

                for(int i = 0; i < n; i++){
                    if(s[i] - 'a' == val){
                        v.push_back(i);
                    }
                }
                val++;
            }
        }
        if(s[0] > s[n - 1]){
            cout << si - sj << " ";
        }
        else{
            cout << sj - si << " ";
        }
        cout << v.size() << endl;
        for(int val : v){
            cout << val + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}