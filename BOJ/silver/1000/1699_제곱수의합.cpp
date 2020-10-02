#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int D[100001];

int function(int n){

    for(int i = 1; i <=n; i++){
        D[i] = i;
        for(int j = 1; j*j <=i; j++){
            if(D[i] > D[i-j*j] + 1){
                D[i] = D[i-j*j] +1;
            }
        }
    }

    return D[n];
}

int main(){
int n;
cin >> n;

cout << function(n);
return 0;
}