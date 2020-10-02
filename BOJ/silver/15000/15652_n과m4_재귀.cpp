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
void go(int index,int start, int n, int m) {
    if (index == m) {
        for (int i=0; i<m; i++) {
            cout << a[i];
            if (i != m-1) cout << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i=start; i<=n; i++) {
        a[index] = i;
        go(index+1, i, n, m);
    }
}
int main() {
    set();
    int n, m;
    cin >> n >> m;
    go(0, 1, n, m);
    return 0;
}