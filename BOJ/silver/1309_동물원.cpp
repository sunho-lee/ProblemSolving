#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int D[100001][3];
int mod = 9901;
int function(int n){
	
	for(int i=2; i<=n; i++){
		D[i][0] = D[i-1][0] + D[i-1][1] + D[i-1][2];
		D[i][1] = D[i-1][0] + D[i-1][2];
		D[i][2] = D[i-1][0] + D[i-1][1];
		
		D[i][0] %= mod;
		D[i][1] %= mod;
		D[i][2] %= mod;
	}
	
	
	
	return (D[n][0]+D[n][1]+D[n][2]) % mod;
}

int main(){
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;

	D[1][0] = 1;
	D[1][1] = 1;
	D[1][2] = 1;

	cout << function(n);

    return 0;

}

