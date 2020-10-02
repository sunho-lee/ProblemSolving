#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int D[100001];
int A[100001];
int ans;
int function(int n){

for(int i = 1; i<=n; i++){
    D[i] = A[i];
    if(D[i-1] + A[i] > A[i]){
        D[i] = D[i - 1] + A[i];
    }
}

for(int i = 1; i <= n; i++){
    ans = max(ans, D[i]);
}

return ans;
}

int main(){
int n;
cin >> n;
for (int i = 1; i <= n; i++) cin >> A[i];

D[0] = -1001;
A[0] = -1001;
ans = -1001;

cout << function(n);

return 0;
}