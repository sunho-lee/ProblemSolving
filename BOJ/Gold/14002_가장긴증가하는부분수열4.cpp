#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int D[1001];
int A[1001];
int V[1001];
int ans;
int p;

void go(int p){
    if(p == -1){
        return ;
    }
    go(V[p]);
    cout << A[p] << ' ';
}

void function(int n){

	for(int i = 2; i <= n; i++){
		D[i] = 1;
		for(int j = i - 1 ; j >= 1; j--){
			if(A[i] > A[j] && D[i] < D[j] + 1){
				D[i] = D[j] + 1;
                V[i] = j;           
			}
		}
	}

	for(int i = 1; i <= n; i++){
        if(ans < D[i]){
            ans = D[i];
            p = i;
        }
		
	}

    cout << ans << '\n';

    go(p);

    cout << '\n';
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
    memset(V, -1, sizeof(V));

	function(n);

    return 0;

}

