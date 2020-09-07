#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int a, b, c, d = 0;
	scanf("%d %d %d", &a ,&b, &c);
	d = a + b + c;
	
	if(a == 60 && b == 60 && c == 60){
		printf("%s", "Equilateral");
	}else if(d == 180 && (a == b || a == c || b == c )){
		printf("%s", "Isosceles");
	}else if(d == 180 && a != b && a != c && b !=c){
		printf("%s", "Scalene");
	}else{
		printf("%s", "Error");
	}

	
return 0;
}

