//0! = 1인 이유         
//
//4! = 4 * 3 * 2 * 1
//   = 4 * (4 - 1)!
//   = 4 * 3! 
//
//n! = n * (n - 1)!가 성립함을 알 수 있음 
//
//1! = 1 * (1 - 1)!
//   = 1 * 0! 
//1!은 1이기때문에  1 * 0!도 1이다 따라서 0!은 1 
//
#include <iostream>

using namespace std;

int Factorial(int n){
	if(n==0) return 1;
	if(n==1) return 1;
	
	return n * Factorial(n-1);
}

int main(){
	int n;

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	cout << Factorial(n);

    return 0;

}

