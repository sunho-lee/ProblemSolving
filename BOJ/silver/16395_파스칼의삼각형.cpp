#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int array[100][100];

int main(){
array[0][0] = 1;
array[1][0] = 1;
array[1][1] = 1;

int n, k;
cin >> n >> k;

for(int i = 2; i < n; i++){
    array[i][0] = 1;
    for(int j = 1; j < i; j++){
        array[i][j] = array[i-1][j-1] + array[i-1][j] ;  
    }
    array[i][i] = 1;
}


cout << array[n-1][k-1];

return 0;
}