#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
    if(a <= b && a <= c && b <= c){
        printf("%d", b);
    }else if(a <= b && a <= c && b >= c){
        printf("%d", c);
    }else if(b <= c && b <= a && a <= c){
        printf("%d", a);
    }else if(b <= c && b <= a && a >= c){
        printf("%d", c);
    }else if(c <= a && c <= b && a <= b){
        printf("%d", a);    
    }else if (c <= a && c <= b && a >= b){
        printf("%d", b);
    }else{
        printf("반례 : %d %d %d", a, b, c);
    }
    

return 0;
}

