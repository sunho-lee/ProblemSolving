#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

long long int D[201][201];
long long int mod = 1000000000;


int function(int n, int k){

for(int i = 1; i<=k; i++){
    for(int j=0; j<=n; j++){
        for(int l=0; l<=j; l++){
            D[i][j] += D[i-1][j-l];
            D[i][j] %= mod;
        }
    }
}

return D[k][n];
}

int main(){

int n, k;
cin >> n >> k;

D[0][0] = 1LL;

cout << function(n, k);

return 0;
}