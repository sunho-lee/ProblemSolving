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

int GCD(int a, int b){
    return b ? GCD(b, a%b) : a;
}

int main(){
    set();

    int t;
    cin >> t;

    for(int k = 1; k<=t; k++){
        int A[111];
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> A[i];
        }
        long long sum = 0;
        for (int i = 1; i <= n - 1; i++){
            for (int j = i+1; j <= n; j++){
                sum += GCD(A[i], A[j]);
            }
            
        }
        cout << sum << '\n';
    }
    

return 0;
}
