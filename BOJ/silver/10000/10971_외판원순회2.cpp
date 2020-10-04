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

int A[12];
int W[11][11];
int main(){
    set();

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        A[i] = i;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> W[i][j];
        }
    }
    int ans = 2147483647;
    int sum = 0;
    bool isNoPay = false;
    do{
        A[n+1] = A[1];
        for (int i = 1;  i<= n; i++){
            if (W[A[i]][A[i+1]] == 0){
                isNoPay = true;
                break;
            }
            sum += W[A[i]][A[i+1]];  
        }

        if (sum < ans && !isNoPay){
            ans = sum;
        }

        sum = 0;
        isNoPay = false;

    } while (next_permutation(A+2, A+1+n));
    
    cout << ans;

return 0;
}