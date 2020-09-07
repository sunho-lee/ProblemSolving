#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int A, B, C, D, E;
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
	if(A < 0){
		printf("%d", abs(A * C) + D + E * B);
	}else if(A == 0){
		printf("%d", D + E * B);
	}else{
		printf("%d", (B - A) * E);
	}

    return 0;

}
