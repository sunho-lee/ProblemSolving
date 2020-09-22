//for(i = 1 to n) D1[i] = max(A[i], D[i-1] + A[i])
//for(i = n to 1) D2[i] = max(A[i], D[i+1] + A[i]) 
//int ans = for(i = 1 to n) max(ans, D1[i]); AND for(i = n to 1) max(ans, D2[i]);
//for(i = 2 to n-1) max(D1[i], D1[i-1] + D2[i + 1])

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int D1[100001];
int D2[100001];
int A[100001];
int ans = -1001;
int main(){
    set();

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }
    D1[1] = A[1];
    for (int i = 2; i <= n; i++){
        D1[i] = A[i];
        D1[i] = max(D1[i], D1[i-1] + A[i]);
    }
    D2[n] = A[n];
    for (int i = n-1; i >= 1; i--){
        D2[i] = A[i];
       
        D2[i] = max(D2[i], D2[i+1] + A[i]);
    }
    
    for (int i = 1; i <= n; i++){
       ans = max(ans, D1[i]);
    }
    
    for (int i = 2; i < n; i++){
        ans = max(ans, D1[i-1] + D2[i+1]);
    }
    
    cout << ans;

return 0;
}