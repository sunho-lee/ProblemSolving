#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int m, d;
	scanf("%d %d", &m, &d);
	
	if(m == 2){
		if(d == 18){
			printf("%s", "Special");
		}else if(d < 18){
			printf("%s", "Before");
		}else if(d > 18){
			printf("%s", "After");
		}
	}else if(m > 2){
		printf("%s", "After");
	}else if(m < 2){
		printf("%s", "Before");
	}
	
return 0;
}

