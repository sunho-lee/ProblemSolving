#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int ans=0;

void Function(int i, int n, vector<int> &T, vector<int> &P, int sum){
    if(i == n){
        if(ans < sum) ans = sum;
        return;
    } 

    if(i > n) return;    

    Function(i+T[i], n, T, P, sum+P[i]);
    Function(i+1, n, T, P, sum);
}
int main(){
    set();

    int n;
    cin >> n;
    vector<int> T(n+1); 
    vector<int> P(n+1);
    for (int i = 1; i <= n; i++){
        cin >> T[i];
        cin >> P[i];
    }

    Function(1, n+1, T, P, 0);
    cout << ans;


return 0;
}