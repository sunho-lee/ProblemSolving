#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

long long int D[100001][4];

long long int mod = 1000000009LL;
int limit = 100000;
void function(){

	for(int i = 4; i<=limit; i++){
		
		D[i][1] = D[i-1][2] + D[i-1][3];
		
		D[i][2] = D[i-2][1] + D[i-2][3];
		
		D[i][3] = D[i-3][1] + D[i-3][2];
		
		D[i][1] %= mod;
		D[i][2] %= mod;
		D[i][3] %= mod;
	}
}

int main(){
	int t, n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	D[0][1] = 0;
	D[0][2] = 0;
	D[0][3] = 0;
	
	D[1][1] = 1;
	D[1][2] = 0;
	D[1][3] = 0;
	
	D[2][1] = 0;
	D[2][2] = 1;
	D[2][3] = 0;
	
	D[3][1] = 1;
	D[3][2] = 1;
	D[3][3] = 1;

	function();

	for(int i = 0; i<t; i++){
		cin >> n;
		cout << (D[n][1] + D[n][2] + D[n][3]) % mod << '\n';	
	}
	

    return 0;

}

