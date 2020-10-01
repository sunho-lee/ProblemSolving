#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int D[11];
int main(){
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	
	D[0] = 0;
	D[1] = 0;
	D[2] = 1;
	
	for(int i = 3; i<=n; i++ ){
		for(int j = 1; j < i; j++){
			if(D[i] < j * (i - j) ){
			D[i] = j * (i - j) + D[j] + D[i - j];
			}
		}			
	}
	
	cout << D[n];

    return 0;

}

