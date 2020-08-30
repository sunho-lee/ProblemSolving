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

int n, r, c, w, count = 0;
cin >> r >> c >> w;
n = r + w - 1;

//파스칼 삼각형 그리기
for(int i = 2; i < n; i++){
    array[i][0] = 1;
    for(int j = 1; j < i; j++){
        array[i][j] = array[i-1][j-1] + array[i-1][j] ;  
    }
    array[i][i] = 1;
}


/* 파스칼 삼각형 출력하기
for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
        cout << array[i][j] << ' ';
    }
    cout << '\n';
}
*/

//파스칼 삼각형 중 필요한 부분만 골라내기
int num = c;
for(int i = r-1; i < r+w-1; i++, num++){
    for(int j = c-1; j < num; j++){
       count += array[i][j];
   }
}
cout << count;

return 0;
}