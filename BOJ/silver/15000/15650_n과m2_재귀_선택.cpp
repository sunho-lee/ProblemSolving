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

int a[10];
void go(int index,int selected, int n, int m) {
    if (selected == m) {
        for (int i=0; i<m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }   

        if (index > n) return;
        a[selected] = index;
        go(index+1, selected+1, n, m);
        a[selected] = 0;
        go(index+1, selected, n, m);
    
}
int main() {
    set();
    int n, m;
    cin >> n >> m;
    go(1,0,n,m);
    return 0;
}