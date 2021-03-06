#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int memo[1001];
int p[1001];
int function(int n){
	memo[0] = 0, memo[1] = p[1];
	
	for (int i=2; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            memo[i] = min(memo[i], memo[i-j]+p[j]);
        }
    }

	return memo[n];
}

int main(){
	int n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> p[i];
		memo[i] = 10000;
	}
	
	cout << function(n);

    return 0;

}

