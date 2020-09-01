#include <iostream>

using namespace std;

int main(){
	int a, b;
    int c = 0, d = 0, e = 0;
	cin >> a >> b;

    c = b / 100;
    d =  b % 100 / 10;
    e = b % 10;
    
    printf("%d\n%d\n%d\n%d", a*e , a*d , a*c , a*b);

    return 0;
}