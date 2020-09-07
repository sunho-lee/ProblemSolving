#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

long long int memo[80];
long long int DP(int n){
    if(n == 1) return 4;
    if(n == 2) return 6;
    
    if (memo[n] > 0){
        return memo[n];
    }else{
        memo[n] = DP(n-1) + DP(n-2);
        return memo[n];
    }  
}

int main(){
    int n;
    cin >> n;
    cout << DP(n);

return 0;
}