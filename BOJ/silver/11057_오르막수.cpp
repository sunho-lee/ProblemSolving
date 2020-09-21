// D[i][j] = ∑D[i-1][k]
// 0 <= k <= j
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;


long long int D[1001][11];
int mod = 10007;
long long int ans;
int function(int n){

	for(int i = 2; i<=n; i++){
		for(int j = 0; j<=9; j++){
			for(int k = 0; k <=j; k++){
				D[i][j] += D[i-1][k];
				D[i][j] %= mod;
			}
			
		}
	}
	
	for(int i = 0; i <= 9; i++){
		ans += D[n][i];
	}
	
	return ans % mod;
}

int main(){
	int n;
	cin >> n;
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for(int i = 0;i <= 9; i++){
		D[1][i] = 1;	
	}
	

	cout << function(n);

    return 0;

}

