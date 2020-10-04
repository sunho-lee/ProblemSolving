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

int S[14];
int D[14];

int main(){
    set();

    while(true){
        int k;
        cin >> k;

        if(k == 0) break;

        for (int i = 1; i <= k; i++){
            cin >> S[i];
          }
         for (int i = 1; i <= k; i++){
            if(i <= 6){
                  D[i] = 1;
            }else{
                D[i] = 0;
            }
        }

        do{
            for (int i = 1; i <= k; i++){
                if(D[i] == 1){
                    cout << S[i] << ' ';
                }
            }   
            cout << '\n'; 
        } while (prev_permutation(D + 1, D + 1 + k));

        cout << '\n';
    }
    
return 0;
}