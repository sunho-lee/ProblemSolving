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

int main(){
    set();

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= 9; i++){
        if (n == 100000000){
            n-=1;
            ans+=9;
        }else if(n >= 10000000 && n <=99999999){
            ans = ans + (n - 9999999) * 8; 
            n = 9999999;
        }else if(n >= 1000000 && n <=9999999){
            ans = ans + (n - 999999) * 7; 
            n = 999999;
        }else if(n >= 100000 && n <=999999){
            ans = ans + (n - 99999) * 6; 
            n = 99999;
        }else if(n >= 10000 && n <=99999){
            ans = ans + (n - 9999) * 5; 
            n = 9999;
        }else if(n >= 1000 && n <=9999){
            ans = ans + (n - 999) * 4; 
            n = 999;
        }else if(n >= 100 && n <=999){
            ans = ans + (n - 99) * 3; 
            n = 99;
        }else if(n >= 10 && n <=99){
            ans = ans + (n - 9) * 2; 
            n = 9; 
        }else if (n >= 1 && n <=9){
            ans = ans + n;
            break;
        }
    }
    
    cout << ans;

return 0;
}