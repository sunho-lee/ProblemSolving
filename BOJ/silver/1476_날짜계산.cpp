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

    int E, S, M;
    cin >> E >> S>> M;

    int e = 0, s = 0, m = 0;

    for (int i = 1;; i++){
        (e==15)? e=1:e+=1;
        (s==28)? s=1:s+=1;
        (m==19)? m=1:m+=1;
        
        if(e == E && s == S && m ==M){
            cout << i;
            break;
        }
    }

return 0;
}