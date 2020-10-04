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
int A[9];

int main(){
    set();

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }
    
    sort(A+1, A+1+n);
    int sum = 0, ans = -1;
    do{

        for (int i = 1; i < n; i++){
            sum += abs(A[i] - A[i+1]);
        }

        if (sum > ans){
            ans = sum;
            sum = 0;
        }else{
            sum = 0;
        }

    } while (next_permutation(A+1, A+1+n));

    cout << ans;   

return 0;
}