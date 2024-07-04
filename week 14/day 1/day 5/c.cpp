#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    string s_man, s_sam;
	    cin >> s_man >> s_sam;
	    int ans = INT_MAX;
		
	    for(int i = 0; i < n; i++){
	        for(int j = i; j < n; j++){
	            int cnt = 0;
				int idx = 0;
				bool ok = false;
	            for(int k = i; k <= j; k++){
	                
	               if(j - i + 1 == m){
					ok = true;
					 if(s_man[k] != s_sam[idx]){
						cnt++;
					 }
					 idx++;

				   }
	            }
				if(ok){
					ans = min(ans, cnt);
				}
			}
	    }

		cout << ans << '\n';
	}

}
