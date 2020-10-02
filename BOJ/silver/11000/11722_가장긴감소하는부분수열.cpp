#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int D[1001];
int A[1001];

int function(int n){

	return 0;
}

int main(){
	int n;
	cin >> n;
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for(int i = 1; i<=n; i++){
		cin >> A[i];
	}

	D[1] = 1;
	
	for(int i = 2; i<=n; i++){
		D[i] = 1;
		for(int j = i; j>=1; j--){
			if(A[i] < A[j] && D[i] < D[j] +1 ){
				D[i] = D[j] + 1;
			}
		}
	}
	
	int ans = D[1];
	for(int i = 2; i<=n; i++){
		if(ans < D[i]){
			ans = D[i];
		}
	}
	cout << ans;
    return 0;

}

