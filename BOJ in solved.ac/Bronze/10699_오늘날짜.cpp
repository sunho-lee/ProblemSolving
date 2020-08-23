#include <iostream>
#include <time.h>

using namespace std;

int main(){
	
	time_t curTime = time(NULL);
	
	struct tm *pLocal = NULL;
	
	pLocal = localtime(&curTime);
	
	if(pLocal == NULL){
		return 1;
	} 	
	
	

	printf("%04d-%02d-%02d", pLocal->tm_year +1900, pLocal->tm_mon + 1, pLocal->tm_mday);

    return 0;

}
