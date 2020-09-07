#include <iostream>

using namespace std;

int main(){
	int a, b, input;
	cin >> a;
	cin >> b;
    int n = a * b;
    
    for(int i = 0; i < 5; i++){
    	cin >> input;
    	cout << input - n << ' ';
	}
    
    return 0;
}