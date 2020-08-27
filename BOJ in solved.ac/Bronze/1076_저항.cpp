#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	string array[] = {"black", "brown", "red", "orange", "yellow",
	                  "green","blue","violet","grey", "white"};	 
	                  
	char temp_a[1001], temp_b[1001], temp_c[1001];

	scanf("%s %s %s",temp_a, temp_b, temp_c);

	string a=temp_a, b = temp_b, c = temp_c;
	
	long long int x, y, z;
		
	for(int i = 0; i < 10; i++){
		if(a == array[i]){
			x = i; 
		}
		
		if(b == array[i]){
			y = i;
		}
		
		if(c == array[i]){
			z = i;
		}
			
	}
	
	printf("%lld", (x * 10 + y) * int(pow(10, z)));
	
    return 0;

}
