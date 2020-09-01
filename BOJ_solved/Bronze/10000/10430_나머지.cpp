#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	
    cout << (a + b) % c << '\n';
    cout << ((a%c) + (b%c)) % c << '\n';
    cout << (a * b) % c << '\n';
    cout << ((a % c) * (b % c)) % c << '\n';

    return 0;

}
