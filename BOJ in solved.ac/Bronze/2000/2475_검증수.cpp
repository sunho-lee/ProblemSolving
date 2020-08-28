#include <iostream>

using namespace std;

int main(){
	int n;
	int pn = 0;
	
	
	for(int i=0; i<5;i++){
		cin >> n;
		pn = pn + n * n;
	}
	
    cout << pn % 10 << endl;
    
    return 0;
}