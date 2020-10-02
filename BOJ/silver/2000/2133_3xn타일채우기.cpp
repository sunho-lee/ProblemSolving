#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int D[31];

int main(){
	int n;
	cin >> n;
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	D[0] = 1;
	for(int i = 2; i<=n; i+=2){
		D[i] = 3 * D[i-2];	
		for(int j = i - 4; j>=0; j-=2){
			D[i] += 2 * D[j];
		}
		
	}

	cout << D[n];

    return 0;

}

