#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;
long long int D[100001][3];
long long int A[100001][2];
long long int ans;
int main(){

    int t, n;
    cin >> t;

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 1; i<=t; i++){
        cin >> n;
        for(int j = 1; j<=n; j++){
            cin >> A[j][1];
        }    
        for(int j = 1; j<=n; j++){
            cin >> A[j][2];
        }

        for(int i = 1; i<=n; i++){
            D[i][0] = max(max(D[i-1][0], D[i-1][1]),D[i-1][2]);
            D[i][1] = max(D[i-1][0], D[i-1][2]) + A[i][1];
            D[i][2] = max(D[i-1][0], D[i-1][1]) + A[i][2];
        }
    
        ans = max(max(D[n][0], D[n][1]), D[n][2]);
        cout << ans << '\n';
    }

    return 0;
}