#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;

vector<int> list[2001];
bool visited[2001];

void dfs(int start){
    visited[start] = true;
    printf("%d ", start);
    //printf("%d ", list[start][1]);
    for (int i = 1; i <= list[start].size(); i++){
        int next = list[start][i];
        
        if(!visited[next]){
            dfs(next);
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    memset(visited, false, sizeof(visited));

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        list[u].push_back(v);
        list[v].push_back(u);
    }
    
    for (int i = 1; i <= n; i++){
        sort(list[i].begin(), list[i].end());
    }
    
    dfs(1);

return 0;
}