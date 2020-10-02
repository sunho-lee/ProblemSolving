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
        A[i] = i;
    }

    do{
        for (int i = 1; i <= n; i++){
            cout << A[i] << ' ';
        } 
        cout << '\n'; 
    } while (next_permutation(A+1, A+1+n));
    
return 0;
}