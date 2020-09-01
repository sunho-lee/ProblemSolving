#include <iostream>
#include <cstring>

using namespace std;

int memo[1000001];
int DP(int n){
	memset(memo, -1, sizeof(memo));
	memo[0], memo[1] = 0;
	memo[2], memo[3] = 1;

	if(memo[n] != -1) return memo[n];
	
	if(n % 3 == 0){
		memo[n] = DP(n/3)+1;
	}else if(n % 2 == 0){
		memo[n] = DP(n/2)+1;
	}else{
		memo[n] = DP(n-1)+1;
	}
	
	cout << " n : "<< n << " data : " << memo[n] <<'\n';
	
	return memo[n];
}

int main(){
	int n;
	cin >> n;
	
	cout << DP(n);
	
    return 0;

}
