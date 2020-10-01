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

bool isBroken[10];

int possible(int c){
    if (c == 0) return isBroken[0]? 0:1;

    int len = 0;
    while (c > 0){
        if(isBroken[c % 10]) return 0;

        len+=1;
        c/=10;    
    }
    
    return len;
}

int main(){
    set();

    int n, t;
    int x;
    cin >> n >> t;

    for(int i = 1; i <= t; i++){
        cin >> x;
        isBroken[x] = true;
    }

    int ans = n - 100;
    if(ans <0){
        ans = -ans;
    }

    for(int i = 0; i <= 1000000; i++){
        int len = possible(i);
        if (len > 0){
            int press = i - n;
            if (press < 0) press = -press;

            if (ans > len + press) ans = len + press;
        }        
    }
    
    cout << ans;

return 0;
}