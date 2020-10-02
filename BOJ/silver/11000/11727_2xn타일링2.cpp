#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int memo[1001];
int function(int n){
	if(n == 0) return memo[n];
	if(n == 1) return memo[n];
	if(n == 2) return memo[n];
	
	if(memo[n] != -1) return memo[n];
	
	memo[n] = (function(n-1) + function(n-2) * 2) % 10007;
	
	return memo[n];
}

int main(){
	int n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(memo, -1, sizeof(memo));
	memo[0] = 1;
	memo[1] = 1;
	memo[2] = 3;
	
	cin >> n;

	cout << function(n);

    return 0;

}

