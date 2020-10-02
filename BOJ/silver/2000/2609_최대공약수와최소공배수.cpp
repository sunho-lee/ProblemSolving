#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    set();

     int a, b;
    cin >> a >> b;

    cout << gcd(a,b) <<'\n';
    cout << lcm(a,b) ;

return 0;
}