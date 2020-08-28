#include <iostream>

using namespace std;

int main(){
	int n;
    scanf("%d", &n);

    for(int i = 1; i <= 9; i++){
        printf("%d", n);
        printf(" %s ","*");
        printf("%d", i);
        printf(" %s ", "=");
        printf("%d\n", n*i);    
    }
    
    

    return 0;
}