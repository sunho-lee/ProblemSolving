#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX + 1];

int main(){
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for(int i = 2; i <= MAX; i++){
		if(check[i] == false){
			prime[pn++] = i;
			for(int j = i + i; j<=MAX; j+=i){
				check[j] = true;
			}
		}
	}
	
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		int n;
		cin >> n;
		int ans = 0;
		for(int j = 0; j < pn; j++){
			if(n-prime[j] >= 2 && prime[j] <= n-prime[j]){
				if(check[n-prime[j]] == false){
					ans +=1;
				}
			}else{
				break;
			}
		}
		cout << ans << '\n';	
	}
	
	
	
    return 0;

}
