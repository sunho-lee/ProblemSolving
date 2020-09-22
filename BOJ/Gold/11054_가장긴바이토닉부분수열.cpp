#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int D[1001];
int D2[1001];
int A[1001];    

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    set();

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }

    
    D[1] = 1;
    for (int i = 2; i <= n; i++){
        D[i] = 1;
        for (int j = 1; j < i; j++){
            if (A[i] > A[j]){
                D[i] = max(D[i], D[j] +1);    
            }   
        }
    }    
   
    D2[n] = 1;
    for (int i = n; i >= 1 ; i--){
        D2[i] = 1;
        for (int j = i+1; j <= n; j++){
            if (A[i] > A[j]){
                D2[i] = max(D2[i], D2[j] + 1);            
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++){
        ans = max(ans, D[i] + D2[i] - 1);
    }
    
   
   cout << ans;
return 0;
}