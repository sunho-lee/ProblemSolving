#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool isPrime(int n){
	if(n<2) return false;
	
	for(int i = 2; i<n;i++){
		if(n % i ==0){
			return false;	
		}
	}
	
	return true;
}

int main(){
	int n, a, ans = 0;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	
	for(int i = 1; i<=n; i++){
		cin >> a;
		if(isPrime(a)){
			ans += 1;
		}
		
	}
	
	cout << ans;
	
    return 0;

}

