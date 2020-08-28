#include <iostream>

using namespace std;

int main(){
	int x;
	int m = 0;
	int s = 0;
	
	for(int i = 0; i<4;i++){
		cin >> x;
		s += x;
	}
	
	cout << s / 60 << '\n';
    cout << s % 60 << '\n';

    return 0;

}
