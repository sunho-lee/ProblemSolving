#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int memo[12];
int function(int n){
	if(n >= 1 && n <= 3) return memo[n];
	if(memo[n] != -1) return memo[n];
	
	memo[n] = function(n-1) + function(n-2) + function(n-3);
	
	return memo[n];
}

int main(){
	int n, x;
	cin >> n;
	
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(memo, -1, sizeof(memo));
	
	memo[1] = 1;
	memo[2] = 2;
	memo[3] = 4;
	
	while(n > 0){
		cin >> x;
		n--;
		cout << function(x) << '\n';	
	}

	

    return 0;

}

