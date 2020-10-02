#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

long long int memo[101][12] = {0};
long long int mod = 1000000000;
long long int sum = 0;
int function(int n){
	if(n == 1) return 9;
	
	for(int i = 2; i <=n; i++){
		for(int j = 0; j <= 9; j++ ){
			if(j + 1 <= 9){
				memo[i][j] = memo[i][j] + memo[i - 1][j + 1];
			}
			if(j - 1 >= 0){
				memo[i][j] = memo[i][j] + memo[i - 1][j - 1];
			}
			memo[i][j] %=mod;
		}
	}
	
	for(int i = 0; i <= 9; i++){
		sum += memo[n][i];
	
	}
	sum%=mod;
	
	return sum;
}

int main(){
	int n;
	cin >> n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for(int i = 1; i <= 9; i++) memo[1][i] = 1;
	
	
	cout << function(n);

    return 0;

}

