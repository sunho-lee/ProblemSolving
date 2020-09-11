#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int D[1001];
int A[1001];
int ans = 0;
int function(int n){

	for(int i = 1; i <= n; i++){
		if(A[i] > A[i-1]){
			D[i] = D[i-1] + 1;
			cout<<"i = " << i <<" A["<< i<<"] = " << A[i] << " A[" << i - 1<< "] = " << A[i - 1] << " D["<< i <<"] = " << D[i] <<  '\n';
		}
	}
	
	for(int i =0; i <= n; i++){
		ans = max(ans, D[i]);
	//	cout << "D["<< i <<"] = " << D[i] << " D["<<i - 1<<"] = " << D[i - 1] << " ans = " << ans <<'\n';
	}
	
	return ans;
}

int main(){
	int n;
	cin >> n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(D, 0, sizeof(D));
	
	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
	
	cout << function(n);

    return 0;

}

