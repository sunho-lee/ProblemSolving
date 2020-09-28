//D[n]적어도 n명의 고객을 얻기 위해 쓰이는 홍보 금액의 최소값 
//C[m]는 고객 수, P[m]는 해당 고객을 얻기 위해 쓰이는 홍보 금액 
//D[n] = min(D[n-C[m]] + P[m])
//적어도 n명이기 때문에 n명 이상이여도 금액이 더 적으면 해당 값을 출력하기
//D[음수]일 경우 예외처리하기
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int MAX = 2147483647;
int D[1001]; 
int P[21]; 
int C[21]; 

int main(){
	int c, n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >>c >>n;

	for(int i = 1; i <= n; i++){
		cin >> P[i] >> C[i];
	}

	for(int i = 1; i <= 1000; i++){
		D[i] = MAX;
		for(int j = 1; j <= n; j++){
			if(i - C[j] < 0){
				if(D[i] > P[j]){
					D[i] = P[j];	
				}
			}else{
				if(D[i] > (D[i-C[j]] + P[j])){
				D[i] = D[i-C[j]] + P[j];	
				}	
			} 
		}
	}
	
	
	int ans = MAX;
	for(int i = c; i<=1000; i++ ){
		if(ans > D[i]){
			ans = D[i];
		}
	}
	
	cout << ans;
	
	
    return 0;

}

