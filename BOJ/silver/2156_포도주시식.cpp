#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;
int D[10001];
int A[10001];

int main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i<=n; i++){
        cin >> A[i];
    }

    D[1] = A[1];
    D[2] = A[1] + A[2];

    for (int i = 3; i <= n; i++){
        D[i] = max(max(D[i-1], D[i-2] + A[i]), D[i-3] +A[i] + A[i-1]);
    }
    cout << D[n];

return 0;
}