#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>

using namespace std;

vector<int> list[2001];
bool check[2001], ans;
void dfs(int start, int depth){
    if(depth == 5){
        ans = true;
        return;
    }

    check[start] = true;

    for (int i = 0; i < list[start].size(); i++){
        int next = list[start][i];
        if(check[next] == true) continue;
        dfs(next, depth + 1);
        if(ans == true) return;
    }
    check[start] = false;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        list[u].push_back(v);
        list[v].push_back(u);
    }
    
    for (int i = 0; i < n ; i++){
        memset(check, false, sizeof(check));
        dfs(i, 1);
        if(ans == true) break;
    }
    
    if(ans == true) printf("%d", 1);
    else printf("%d", 0);
    
    

return 0;
}