#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int D[1001];
int A[1001];
int ans;
int function(int n){

	for(int i = 2; i <= n; i++){
		for(int j = i - 1 ; j >= 1; j--){
			if(A[i] > A[j]){
				D[i] = max(D[i], D[j] + 1);
			}
		}
	}

	for(int i = 1; i <= n; i++){
		ans = max(ans, D[i]);
	}
	
	return ans;
}

int main(){
	int n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
	D[1] = 1;

	cout << function(n);

    return 0;

}

