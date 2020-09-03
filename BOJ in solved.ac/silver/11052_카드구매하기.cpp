#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int memo[1001];
int p[1001];
int function(int n){
	if(n == 1) return p[n];
	if(memo[n] != -1) return memo[n];
	
	memo[n] = function(n-1) + p[n];
	cout << "n : "<< n << " memo[n] : " << memo[n] << '\n';
	return memo[n];
}

int main(){
	int n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(memo, -1, sizeof(memo));
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> p[i];
	}
	
	cout << function(n);

    return 0;

}

