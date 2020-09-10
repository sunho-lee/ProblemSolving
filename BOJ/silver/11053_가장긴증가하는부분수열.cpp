#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int memo[1001];
int A[1001];
int ans = 0;
int function(int n){

	for(int i = 2; i <= n; i++ ){
		for(int j = 1; j < i; j++ ){
			if(A[i] > A[j]){
				memo[i] = memo[i-j] + 1;	
			}
		}
	}
	
	for(int i = 1; i < n; i++) ans = max(ans,memo[i]);
	
	return ans;
}

int main(){
	int n;
	cin >> n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(memo, 0, sizeof(memo));
	
	memo[1] = 1;
	
	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
	
	
	
	cout << function(n);

    return 0;

}

