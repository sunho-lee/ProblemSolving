#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

/* 자릿수 찾는 함수 (음수 포함)
   number : 대상 숫자
   disits : 자릿수
   return : 대상 숫자의 해당 자리수에 위치한 값
   예외   : int의 최대 값인 10^10보다 클 경우
            자릿수 값을 잘못 입력한 경우
*/
int findNumberDisits(int number, int disits){
    int t = 1;
    int d = 1;

    if (disits > 10 || disits <= 0) return -1;

    for (int i = 1; i < disits; i++){
        d *= 10;
    } 

    if(number < 0) number = -number;

    if(d > number) return -1;

    while(true){
        if(t == d){
            return number % 10;    
        }
        number /= 10;
        t *= 10;
    }

    return -1;
}

int main(){

    cout<< "1489's thousands = " << findNumberDisits(1489, 4) << '\n';
    cout<< "1489's hundreds  = " << findNumberDisits(1489, 3) << '\n';
    cout<< "1489's tens = " << findNumberDisits(1489, 2) << '\n';
    cout<< "1489's units = " << findNumberDisits(1489, 1) << '\n';

return 0;
}