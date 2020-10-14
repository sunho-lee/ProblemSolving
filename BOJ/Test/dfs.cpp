#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
/*	4 5 1
	1 2
	1 3
	1 4
	2 4
	3 4	
*/
bool check[1001];
int adjMatrix[1001][1001];
void dfs_matrix(int n, int start){
	check[start] = true;
	printf("%d ", start);
	for(int i = 1; i <= n; i++){
		if(adjMatrix[start][i] == 1 && check[i] == false){
			dfs_matrix(n, i);
		}
	}
}

vector<int> adjList[1001];
void dfs_list(int start){
	check[start] = true;
	printf("%d ", start);
	for(int i = 0; i < adjList[start].size(); i++){
		int next = adjList[start][i];
		if(check[next] == false){
			dfs_list(next);
		}
	}
}

int main(){
	int n, m, start;

	scanf("%d %d %d", &n, &m, &start);
	
	for(int i = 0; i < m; i++){
		int u, v;
		scanf("%d %d", &u, &v);		
		adjMatrix[u][v] = 1;
		adjMatrix[v][u] = 1;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	
	for(int i = 1; i <= n; i++){
		sort(adjList[i].begin(), adjList[i].end());
	}
	
	dfs_matrix(n, start);
	printf("\n");
	
	memset(check,false,sizeof(check));
	dfs_list(start);
	
    return 0;
}

