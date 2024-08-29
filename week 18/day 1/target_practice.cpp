#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        char arr[10][10];
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        int cnt_1st = 0,cnt_2st = 0,cnt_3st = 0,cnt_4st = 0,cnt_5st = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(i == 0 || i == 9){
                    if(arr[i][j] == 'X'){
                        cnt_1st++;
                    }
                }
                else if(j == 0 || j == 9){
                    if(arr[i][j] == 'X'){
                        cnt_1st++;
                    }
                }

                if(i == 1 && j > 0 && j < 9){
                    if(arr[i][j] == 'X'){
                        cnt_2st++;
                    }
                }
                if(i > 1 && i < 8){
                    if(j == 1 || j == 8){
                        if(arr[i][j] == 'X'){
                            cnt_2st++;
                        }
                    }
                }

                if(i == 8 && j > 0 && j < 9){
                    if(arr[i][j] == 'X'){
                        cnt_2st++;
                    }
                }

                if(i == 2 && j > 1 && j < 8){
                    if(arr[i][j] == 'X'){
                        cnt_3st++;
                    }
                }
                if(i == 7 && j > 1 && j < 8){
                    if(arr[i][j] == 'X'){
                        cnt_3st++;
                    }
                }
                if(i > 2 && i < 7){
                    if(j == 2 || j == 7){
                       if(arr[i][j] == 'X'){
                         cnt_3st++;
                       }
                    }
                }

                if(i == 3 && j > 2 && j < 7){
                    if(arr[i][j] == 'X'){
                        cnt_4st++;
                    }
                }
                if(i == 6 && j > 2 && j < 7){
                    if(arr[i][j] == 'X'){
                        cnt_4st++;
                    }
                }
                if(i > 3 && i < 6){
                    if(j == 3 || j == 6){
                        if(arr[i][j] == 'X'){
                            cnt_4st++;
                        }
                    }
                }

                if(i == 4 || i == 5){
                    if(j == 4 || j == 5){
                        if(arr[i][j] == 'X'){
                            cnt_5st++;
                        }
                    }
                }
               
            }
        }

        ans = (cnt_1st * 1) + (cnt_2st * 2) + ( cnt_3st * 3) + (cnt_4st * 4) + (cnt_5st * 5);
        cout << ans << endl;
    }
    return 0;
}