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
    int t;
    cin >> t;

    while(t--){
        int m, n, x, y;
        int s;
        cin >> m >> n >> x >> y;

        x -=1;
        y -=1;
        bool ok = false;
        for (int i = x; i < (m * n); i+=m){
            if (i % n == y){
                cout << i+1 << '\n';
                ok = true;
                break;
            }        
        }
        if (!ok){
            cout << -1 << '\n';
        }
    }

return 0;
}