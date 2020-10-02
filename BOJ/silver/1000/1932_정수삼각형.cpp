#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int A[501][501];
int D[501][501];

int main(){
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cin >> A[i][j];	
		}
	}
	
	D[1][1] = A[1][1];
	
	for(int i = 2; i<=n; i++){
		for(int j = 1; j<=i; j++){
			
			D[i][j] = D[i-1][j] + A[i][j];
			
			if(j > 1 && D[i][j] < D[i-1][j-1] + A[i][j]) {
				
				D[i][j] = D[i-1][j-1] + A[i][j];	
				
			}	
		}
	}
	
	int ans = D[n][1];
	for(int i = 1; i<=n; i++){
		if(ans < D[n][i]){
			ans = D[n][i];	
		}
		
	}
	cout << ans;
    return 0;

}

