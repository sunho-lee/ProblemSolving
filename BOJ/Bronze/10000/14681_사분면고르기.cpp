#include <iostream>

using namespace std;

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    
    if(x > 0){
    	printf("%d", (y>0)?1:4);
	}else if(x < 0){
		printf("%d", (y>0)?2:3);
	}else{
		printf("%s", "error");
	}

    return 0;

}
