#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


char B[51][51];
int main(){
    set();

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> B[i][j];
        }        
    }

    char c;
    int len = 1;
    int ans = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j < n){
                c = B[i][j];
                B[i][j] = B[i][j+1];                        
                B[i][j+1] = c;
            

            for (int k = 1; k <= n; k++){
                for (int l = 1; l < n; l++){
                    if (B[k][l] == B[k][l+1]){
                        len += 1;
                        if(ans < len) ans = len;
                    }else{
                        if(ans < len) ans = len;
                        len = 1;                        
                    }          
                }    
                len = 1;
            }
            
            for (int k = 1; k <= n; k++){
                for (int l = 1; l < n; l++){
                    if (B[l][k] == B[l+1][k]){
                        len += 1;        
                        if(ans < len) ans = len;
                    }else{
                        if(ans < len) ans = len;
                        len = 1;                        
                    }          
                }  
                len = 1;  
            }

                c = B[i][j];
                B[i][j] = B[i][j+1];                        
                B[i][j+1] = c;
            
                c = B[j][i];
                B[j][i] = B[j+1][i];                        
                B[j+1][i] = c;
                
                for (int k = 1; k <= n; k++){
                    for (int l = 1; l < n; l++){
                      if (B[k][l] == B[k][l+1]){
                         len += 1;
                          if(ans < len) ans = len;
                       }else{
                          if(ans < len) ans = len;
                           len = 1;                        
                       }          
                    }    
                    len = 1;
                }
            
                for (int k = 1; k <= n; k++){
                    for (int l = 1; l < n; l++){
                        if (B[l][k] == B[l+1][k]){
                            len += 1;        
                            if(ans < len) ans = len;
                        }else{
                            if(ans < len) ans = len;
                            len = 1;                        
                        }          
                    }  
                    len = 1;  
                }

                c = B[j][i];
                B[j][i] = B[j+1][i];                        
                B[j+1][i] = c;
            }
        }
    }
    
    cout << ans;

return 0;
}