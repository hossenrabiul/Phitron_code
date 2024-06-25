#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long cnt = 0;
        for(int i = 0; i < s.size(); i++){
                // cnt = 0;
                cnt++;
                int s1 = 0, s2 = 0;

                if(s[i] == '0'){
                    s1++; 
                }
                else{
                    s2++;
                }
                for(int j = i + 1; j < s.size(); j++){
                    if(s[j] == '0'){
                        s1++;
                    }
                    else{
                        s2++;
                    }

                    if(s1 == s2){
                        cnt += 2;
                    }
                    else{
                        cnt++;
                    }
                }
                // cout << cnt << " ";
               
        }
        cout << cnt << '\n';
    }

    return 0;
}