#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;
//출처 https://velog.io/@hozero95/Algorithm-BOJ-2839%EB%B2%88
int main(){
    int n, result = 0;
    cin >> n;

    while(n % 5 != 0 && n >= 0){
        n -=3;
        result++;
    }

    if(n<0){
        cout << -1;
    }else{
        cout << (result += n/5);
    }

return 0;
}