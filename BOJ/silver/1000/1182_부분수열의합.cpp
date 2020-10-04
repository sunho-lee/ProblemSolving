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
int A[20];
int main(){
    set();

    int n, s;
    cin >> n >> s;

    int sum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++){
        cin >> A[i];
    }


    for (int i = 1; i < (1<<n); i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            if(i & (1 << j)){
                sum+= A[j];
            }
        }
        if(sum == s){
            ans += 1;
        }
    }   

    cout << ans;
return 0;
}