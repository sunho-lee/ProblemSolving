#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
long long int memo[91][2];
long long int function(int n){
	
	for(int i = 2; i<=n; i++){
		memo[i][0] = memo[i-1][0] + memo[i-1][1];
		memo[i][1] = memo[i-1][0];	
	}
	
	return memo[n][0] + memo[n][1];
}

int main(){
	int n;
	cin >> n;
	
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(memo, 0, sizeof(memo));
	
	memo[1][0] = 0;
	memo[1][1] = 1;

	cout << function(n);

    return 0;

}

