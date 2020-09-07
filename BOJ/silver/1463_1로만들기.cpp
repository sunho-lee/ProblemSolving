#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int memo[1000001];
int DP(int n){
	
	if(memo[n] != -1){
	//	cout << "memo n :" << n << '\n';
		return memo[n];	
	}
	
	memo[n] = 2147483647;
	
	if(n % 3 == 0){
		memo[n] = min(memo[n], DP(n/3) + 1);	
	}
	if(n % 2 == 0){
		memo[n] = min(memo[n], DP(n/2) + 1) ;
	}
	memo[n] = min(memo[n], DP(n-1) + 1) ;	
	
	
	//cout << "n = " << n << " memo[n] = "<< memo[n] <<'\n';
	
	return memo[n];
}

int main(){
	int n;
	
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(memo, -1, sizeof(memo));
	
	memo[0] = 0, memo[1] = 0;
	memo[2] = 1, memo[3] = 1;
	
	
	cin >> n;
	
	cout << DP(n);
	
    return 0;

}
