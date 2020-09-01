#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int n;
	double input;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%lf", &input);
		
		printf("$%.2f\n", input * 80 / 100);	
	}

return 0;
}

