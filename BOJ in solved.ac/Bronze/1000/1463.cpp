#include <iostream>

using namespace std;

int memo[1000001];
int DP(int n){
	memo[1] = 0;
	memo[2] = 1;
	memo[3] = 1;
	if(memo[n] != -1) return memo[n];
	
	if(n % 3 == 0){
		memo[n] = DP(n/3) + 1;
	}
	if(n % 2 == 0){
		memo[n] = DP(n/2) + 1;
	}
	memo[n] = DP(n-1) + 1;
	cout << memo[n] <<'\n';
	
	return memo[n];
}

int main(){
	int n;
	cin >> n;
	
	cout << DP(n);
	
    return 0;

}
