#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int memo[45];
int B(int k){
    
    if(k == 0){
        return 0;
    }else if(k == 1 || k == 2){
        return 1;
    }else{
        if (memo[k] > 0){
            return memo[k];
        }  
        memo[k] = B(k-1) + B(k-2);
        return memo[k];
    }
}

int main(){
    int k;
    cin >> k;
    
   
    cout << ((k > 0)? B(k-1) : 1) << " " << B(k);
return 0;
}