#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int a;
	scanf("%d", &a);
	
	
	if(100 >= a && a >= 90){
		printf("%s", "A");
	}else if(90 > a && a >= 80){
		printf("%s", "B");
	}else if(80 > a && a >= 70){
		printf("%s", "C");
	}else if(70 > a && a >= 60){
		printf("%s", "D");
	}else{
		printf("%s", "F");
	}

	
return 0;
}

