#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int day, car, cnt = 0;
	scanf("%d", &day);
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &car);
		if(day == car) cnt +=1;
	}
	
	printf("%d", cnt);
	
return 0;
}

