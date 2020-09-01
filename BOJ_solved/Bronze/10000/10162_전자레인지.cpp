#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int input;
	int answer[3] = {}; 
	int button[3] = {300, 60, 10};
	scanf("%d", &input);
	
	for(int i = 0; i < 3; i++){
		
		answer[i] = input / button[i];  
		input %= button[i];

	}
	
	
	if(input == 0){
		printf("%d %d %d", answer[0], answer[1], answer[2]);
	}else{
		printf("%d", -1);
	}
	
	
return 0;
}

