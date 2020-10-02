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
int A[10001];
int main(){
    set();

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }
    if (next_permutation(A+1, A+1+n)){
        for (int i = 1; i <= n; i++){
            cout << A[i] << ' ';
        } 
    } else {
        cout << -1;
    }
    
return 0;
}