#include <iostream>

using namespace std;

int main(){

int a;
int array[6] = {1,1,2,2,2,8}; 

for(int i = 0; i < 6; i++){
	cin >> a;
	cout <<  array[i] - a << ' ';
}

return 0;
}

