#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
        for(int j = n; j >= 1; j--){
            if(j <= i  ){
                printf("%s", "*");
            }else{
                printf("%s", " ");
            }
        }
        printf("%s", "\n");
    }

    return 0;

}
