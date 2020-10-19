#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> list[1001];
bool visited[1001];

void dfs(int start){
	visited[start] = true;
	
	for(int i = 0; i < list[start].size(); i++){
		int next = list[start][i];
		if(!visited[next]){
			dfs(next);
		}
	}
}

int main(){
	int n, m;
	int component = 0;
	scanf("%d %d", &n, &m);

	for(int i = 0; i < m; i++){
		int u, v;
		scanf("%d %d", &u, &v);
		list[u].push_back(v);
		list[v].push_back(u);
	}

	for(int i = 0; i < n; i++){
		sort(list[i].begin(), list[i].end());
	}	
	
	for(int i = 1; i<=n; i++ ){
		if(!visited[i]){
			dfs(i);
			component += 1;		
		}
	}
	
	printf("%d", component);
	
    return 0;

}

