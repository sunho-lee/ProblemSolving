#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int memo[1000001];
int DP(int n){
	//모든 배열의 값을 -1로 초기화 하였기 때문에 함수 동작 중 
	//메모이제이션한 값은 해당 값을 바로 리턴
	if(memo[n] != -1){
		return memo[n];	
	}
	//값 비교를 위해 int 최대값으로 초기화
	memo[n] = 2147483647;
	
	if(n % 3 == 0){
		memo[n] = min(memo[n], DP(n/3) + 1);	
	}
	if(n % 2 == 0){
		memo[n] = min(memo[n], DP(n/2) + 1) ;
	}
	memo[n] = min(memo[n], DP(n-1) + 1) ;	
	
	return memo[n];
}

int main(){
	int n;
	
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//배열의 모든 값을 -1로 초기화
	memset(memo, -1, sizeof(memo));
	//1은 인풋이 정답이니 0, 2와 3은 한번 나누어야하니 1로 초기화
	memo[0] = 0, memo[1] = 0;
	memo[2] = 1, memo[3] = 1;
	
	cin >> n;
	
	cout << DP(n);
	
    return 0;

}
