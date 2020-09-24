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

int A[1000001];
int main(){
    set();

    int n, s;
    cin >> n >> s;

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        int diff = x-s;
        if(diff < 0) diff = -diff;
        A[i] = diff;
    }

    int ans = A[1];
    for (int i = 2; i <= n; i++){
        ans = GCD(ans, A[i]);
    }
    
    cout << ans;


return 0;
}
