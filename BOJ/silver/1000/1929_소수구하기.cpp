#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void Eratos(int n, int m){
	//2~n-1까지 저장 
	bool primeArray[m+1];
	
	for(int i = 2; i<=m; i++) primeArray[i]= true;

	//n이 120이고 11^2 > 120 이므로 11보다 작은 수의 배수들만 지워도 충분 
	for(int i = 2; i * i<=m; i++){
		if(primeArray[i]){
			for(int j = i * i; j<=m; j+=i){
				primeArray[j] = false;
			}
		}
	}		
	
	for(int i = n; i<=m; i++){
		if(primeArray[i]){
			cout << i << '\n';
		}
	}
	
}

int main(){
	int n, m;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	Eratos(n,m);

    return 0;

}

